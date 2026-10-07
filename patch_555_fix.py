import struct, pathlib
def wstr(b): return b.decode('utf-16le','ignore').split('\x00')[0]
SRC="v1.0=עם סייר קבצים.pac"
DST="v1.3=עם_סייר_קבצים+Snake_555_fix.pac"
SNAKE="prebuilt/usb_t117/snake.bin"
BASE=0x88000000

def extract_user(p):
    d=open(p,'rb').read()
    cnt,=struct.unpack_from('<I',d,52+512+512); st,=struct.unpack_from('<I',d,52+512+512+4)
    for i in range(cnt):
        e=st+i*2580; ent=d[e:e+2580]; sz,=struct.unpack_from('<I',ent,1540); off,=struct.unpack_from('<I',ent,1552); fn=wstr(ent[4+512:4+1024])
        if fn=='user.bin':
            return d[off:off+sz], d, cnt, st
    raise

ub, pac, cnt, st = extract_user(SRC)
orig_len=len(ub)
print(f"orig {orig_len} {hex(orig_len)}")

# snake raw
snake_raw = pathlib.Path(SNAKE).read_bytes()[512:]
# build new ub with handler at end
# choose to reuse slot 0x140d60 (*#0606*#) for 555, make it same type as 1234
# 1234 entry: b=0x16 c=0x0b
# we will patch 0x140d60's b,c to match 1234's, and handler to new
# string at 0x32654c -> "*#555#"
str_off = 0x32654c
new_str = b'*#555#\x00\x00'  # 8 bytes: "*#555#" 6 + null 1 + pad 1 =8 ; slot originally 8 chars "*#0606*#" =8 + null 1 =9? actual slot len 8? let's check: "*#0606*#" is 8 chars, at 0x32654c length 8 + null =9, but next string at 0x326558 is 12 bytes after (0xc). So we have 12 bytes total? Let's see: 0x32654c to 0x326558 = 0xc =12. So we can write 12 bytes: "*#555#\x00" + 5 zeros =12? Wait "*#0606*#" is 8 chars, not 6. To keep same length, we need pad to 12. Simpler write 12 bytes: "*#555#\x00\x00\x00\x00\x00\x00" (6+1+5)
# Check original bytes at 32654c: 8 chars + null + 3 pad? Let's just write 12 with 555 and zeros.
# Use 12 bytes to avoid overflow.
# We'll write 12 bytes at 32654c, but careful not to overlap next string at 326558 (which is 12 bytes after). So 32654c +12 =326558 OK.
# So write 12 bytes.
new_str12 = b'*#555#\x00' + b'\x00'*5  # actually 6+1+5=12
# But string "*#0606*#" was 8 chars, we are shortening, need 12 total, so 6+1+5=12 correct.

# handler offset at end
handler_off = len(ub)
# align 4
if handler_off %4: 
    pad=4-handler_off%4
    ub = ub + b'\x00'*pad
    handler_off += pad
    print(f"aligned handler_off {hex(handler_off)}")

handler_size = 12 # 8 thumb +4 literal
payload_off = handler_off + handler_size
snake_entry = BASE + payload_off
handler_thumb = BASE + handler_off + 1

print(f"handler {hex(handler_off)} -> {hex(handler_thumb)} snake {hex(snake_entry)} payload {hex(payload_off)}")

# build handler: push {lr}; ldr r0,[pc,#4]; bx r0; pop {pc}; .word snake_entry
handler_bytes = bytes.fromhex('00 B5 01 48 00 47 00 BD') + struct.pack('<I', snake_entry)
assert len(handler_bytes)==12

# new_ub
new_ub = bytearray(ub)
# ensure length == handler_off
assert len(new_ub)==handler_off
new_ub.extend(handler_bytes)
assert len(new_ub)==payload_off
new_ub.extend(snake_raw)
print(f"new len {len(new_ub)} +{len(new_ub)-orig_len}")

# patch string
old = new_ub[str_off:str_off+12]
print(f"old str {old} {old.hex()}")
new_ub[str_off:str_off+12] = new_str12
print(f"new str {new_ub[str_off:str_off+12]}")

# patch table entry at 0x140d60
tbl = 0x140d60
# copy b,c from 1234 entry at 0x140d70
b_val,c_val = struct.unpack_from('<II', ub, 0x140d70+4)
print(f"copy b {hex(b_val)} c {hex(c_val)} to 140d60")
struct.pack_into('<II', new_ub, tbl+4, b_val, c_val)
# handler
struct.pack_into('<I', new_ub, tbl+12, handler_thumb)
print(f"patched {hex(tbl+12)} -> {hex(handler_thumb)}")
# verify
print(f"entry {new_ub[tbl:tbl+16].hex(' ')}")

# also keep old 677881 slot reverted? In v1.2 we changed 3264c4 to 555, now we use 32654c, so need to revert 3264c4 if coming from v1.0? Since SRC is v1.0, it's still 677881, so no need. But we built from v1.0, so 677881 stays.
# check not to leave duplicate

# repack
HDR,ENT=2124,2580
def crc16_arc(data,crc=0):
    t=[]
    for i in range(256):
        c=i
        for _ in range(8): c=(c>>1)^0xA001 if c&1 else c>>1
        t.append(c)
    for b in data: crc=(crc>>8)^t[(crc^b)&0xFF]
    return crc

d=bytearray(open(SRC,'rb').read())
count,=struct.unpack_from('<I',d,52+512+512)
start,=struct.unpack_from('<I',d,52+512+512+4)
repl={"user.bin": bytes(new_ub)}
ents,blobs=[],[]
for i in range(count):
    e=start+i*ENT; ent=bytearray(d[e:e+ENT]); sz,=struct.unpack_from('<I',ent,1540); off,=struct.unpack_from('<I',ent,1552); fn=wstr(bytes(ent[4+512:4+1024]))
    data=bytes(d[off:off+sz]) if sz else b''
    if fn in repl:
        data=repl.pop(fn); print(f"repl {fn} {sz}->{len(data)}")
    ents.append(ent); blobs.append(data)
assert not repl
pos=start+count*ENT
for ent,data in zip(ents,blobs):
    if data:
        struct.pack_into('<I',ent,1540,len(data)); struct.pack_into('<I',ent,1552,pos); pos+=len(data)
out=bytearray(d[:start]); struct.pack_into('<I',out,48,pos)
for ent in ents: out+=ent
for data in blobs: out+=data
assert len(out)==pos
struct.pack_into('<H',out,2122,crc16_arc(bytes(out[HDR:])))
struct.pack_into('<H',out,2120,crc16_arc(bytes(out[:2120])))
open(DST,'wb').write(out)
print(f"wrote {DST} {len(out)}")

# verify
def extract2(p):
    d=open(p,'rb').read(); cnt,=struct.unpack_from('<I',d,52+512+512); st,=struct.unpack_from('<I',d,52+512+512+4)
    for i in range(cnt):
        e=st+i*ENT; ent=d[e:e+ENT]; sz,=struct.unpack_from('<I',ent,1540); off,=struct.unpack_from('<I',ent,1552); fn=wstr(bytes(ent[4+512:4+1024]))
        if fn=='user.bin': return d[off:off+sz]
ub2=extract2(DST)
print("verify str", ub2[0x32654c:0x32654c+12])
print("verify ptr", hex(struct.unpack_from('<I',ub2,0x140d6c)[0]))
print("handler bytes", ub2[handler_off:handler_off+12].hex())
