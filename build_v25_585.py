import struct, pathlib
SRC="v1.0=עם סייר קבצים.pac"
DST="v2.5=עם_סייר_קבצים+SNAKE_585.pac"
HDR,ENT=2124,2580
BASE=0x88000000
def wstr(b): return b.decode('utf-16le','ignore').split(chr(0))[0]
def w16(s): return s.encode('utf-16le').ljust(512, b'\x00')[:512]
d=bytearray(open(SRC,'rb').read())
cnt,=struct.unpack_from('<I', d, 52+512+512)
start,=struct.unpack_from('<I', d, 52+512+512+4)
ents=[]; blobs=[]
for i in range(cnt):
    e=start+i*ENT
    ent=bytearray(d[e:e+ENT])
    sz,=struct.unpack_from('<I', ent, 1540)
    off,=struct.unpack_from('<I', ent, 1552)
    fid=wstr(bytes(ent[4:4+512]))
    fname=wstr(bytes(ent[4+512:4+1024]))
    data=bytes(d[off:off+sz]) if sz else b''
    ents.append(ent); blobs.append(data)
snake_full=pathlib.Path("prebuilt/usb_t117/snake.bin").read_bytes()
snake_raw=snake_full[512:]
chunks=[snake_raw[i*4236:(i+1)*4236] for i in range(4)]
# find safe frees in .text (not BSS, not overwritten) - use 0x304745, 0x30ab75, 0x162e42, 0x163000
frees=[0x304745, 0x30ab75, 0x162e42, 0x3070ed]
ub=bytearray(blobs[7])
for off,c in zip(frees, chunks):
    if any(b!=0 for b in ub[off:off+len(c)]):
        print(f"WARN free {hex(off)} not zero, len {len(ub[off:off+16].hex())}")
    ub[off:off+len(c)]=c
    print(f"placed chunk {hex(off)}")
# handler at 0x304000 (safe .text)
handler_free=0x1607fd
from keystone.keystone import Ks, KS_ARCH_ARM, KS_MODE_THUMB
CODE=f"""
.thumb
    push {{lr}}
    ldr r0, =0x88000000
    ldr r1, =0x{BASE+frees[0]:08x}
    ldr r2, =4236
    bl do_copy
    ldr r1, =0x{BASE+frees[1]:08x}
    ldr r2, =4236
    bl do_copy
    ldr r1, =0x{BASE+frees[2]:08x}
    ldr r2, =4236
    bl do_copy
    ldr r1, =0x{BASE+frees[3]:08x}
    ldr r2, =4236
    bl do_copy
    ldr r0, =0x88000000
    bx r0
do_copy:
    ldrb r3, [r1]
    strb r3, [r0]
    adds r0, #1
    adds r1, #1
    subs r2, #1
    bne do_copy
    bx lr
"""
ks=Ks(KS_ARCH_ARM, KS_MODE_THUMB)
enc,_=ks.asm(CODE, addr=BASE+handler_free)
print(f"handler {len(enc)} at {hex(handler_free)} {bytes(enc[:20]).hex()}")
if any(b!=0 for b in ub[handler_free:handler_free+len(enc)]):
    print("WARN handler free not zero")
ub[handler_free:handler_free+len(enc)]=bytes(enc)
# NEW dial code *#585# at 0x32654c (was *#0606*#, then *#555#)
ub[0x32654c:0x32654c+12]=b'*#585#\x00'+b'\x00'*6
# table at 0x140d60: use b=0x16 c=0x0b like *#1234# (len 6)
struct.pack_into('<II', ub, 0x140d60+4, 0x12, 0x0b)
handler_thumb=BASE+handler_free+1
struct.pack_into('<I', ub, 0x140d60+12, handler_thumb)
print(f"585 handler thumb {hex(handler_thumb)} string *#585# at 32654c")
blobs[7]=bytes(ub)
ents[13][4:4+512]=w16("SNAKE")
ents[13][4+512:4+1024]=w16("snake.bin")
struct.pack_into('<I', ents[13], 0x61c, 0x80000027)
blobs[13]=snake_full
pos=start+cnt*ENT
for ent,data in zip(ents, blobs):
    if data:
        struct.pack_into('<I', ent, 1540, len(data))
        struct.pack_into('<I', ent, 1552, pos)
        pos+=len(data)
    else:
        struct.pack_into('<I', ent, 1540, 0)
out=bytearray(d[:start])
struct.pack_into('<I', out, 48, pos)
for ent in ents: out+=ent
for data in blobs: out+=data
def crc16_arc(data,crc=0):
    t=[]
    for i in range(256):
        c=i
        for _ in range(8): c=(c>>1)^0xA001 if c&1 else c>>1
        t.append(c)
    for b in data: crc=(crc>>8)^t[(crc^b)&0xFF]
    return crc
struct.pack_into('<H', out, 2122, crc16_arc(bytes(out[HDR:])))
struct.pack_into('<H', out, 2120, crc16_arc(bytes(out[:2120])))
open(DST,'wb').write(out)
print(f"wrote {DST} {len(out)}")
