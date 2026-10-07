#!/usr/bin/env python3
import struct, pathlib

def wstr(b): return b.decode('utf-16le','ignore').split('\x00')[0]

SRC_PAC = r"v1.0=עם סייר קבצים.pac"
DST_PAC = r"v1.2=עם_סייר_קבצים+Snake_555.pac"
SNAKE_PATH = r"prebuilt/usb_t117/snake.bin"
BASE = 0x88000000

# 1. Extract user.bin
def extract_user(pac_path):
    d=open(pac_path,'rb').read()
    cnt,=struct.unpack_from('<I',d,52+512+512)
    start,=struct.unpack_from('<I',d,52+512+512+4)
    for i in range(cnt):
        e=start+i*2580
        ent=d[e:e+2580]
        sz,=struct.unpack_from('<I',ent,1540)
        off,=struct.unpack_from('<I',ent,1552)
        fname=wstr(ent[4+512:4+1024])
        if fname=='user.bin':
            return d[off:off+sz], d, cnt, start, e
    raise Exception("user.bin not found")

ub, pac_data, cnt, start, user_ent_off = extract_user(SRC_PAC)
orig_len = len(ub)
print(f"orig user.bin {orig_len} 0x{orig_len:x}")

# 2. Prepare handler and snake payload
snake_full = pathlib.Path(SNAKE_PATH).read_bytes()
# snake has DHTB 512 header, raw code after
assert snake_full[0:4]==b'DHTB', "snake header bad"
snake_raw = snake_full[512:]  # 17456-512 = 16944
print(f"snake raw {len(snake_raw)} bytes, orig snake {len(snake_full)}")

# Find offsets
handler_off = len(ub)  # append at end
# Handler thumb code: push {lr}; ldr r0, [pc, #4]; bx r0; pop {pc}; .word snake_entry
# We will place literal after
# Thumb encoding:
# push {lr} = 00 B5
# ldr r0, [pc, #4] = 01 48 (since pc+4 aligned)
# bx r0 = 00 47
# pop {pc} = 00 BD (though not reached, but placeholder)
# literal = 4 bytes snake entry
# Need to ensure handler is thumb, so address odd

# payload offset right after handler (8 bytes code +4 literal =12) padded to 4
handler_code = bytes.fromhex('00 B5 01 48 00 47 00 BD')
# placeholder for literal, will fill later
payload_off = handler_off + len(handler_code) + 4
# align payload to 4
if payload_off % 4:
    pad = 4 - (payload_off % 4)
    handler_code += b'\x00'*pad  # not ideal but we will adjust literal position
    payload_off += pad

# Actually we included 4 literal in handler_code? No we need to add literal after.
# Let's define handler with literal:
# handler_off: 00 B5 01 48 00 47 00 BD XX XX XX XX
# So handler size = 12 bytes (if no pad). We'll make it 12.

# Recompute cleanly
handler_size = 8 + 4  # 8 bytes thumb + 4 literal
handler_off = orig_len
if handler_off % 4:
    # align handler to 4
    handler_off += 4 - (handler_off % 4)
    # pad ub to that? We'll pad with zeros
    ub = ub + b'\x00'*(handler_off - orig_len)

payload_off = handler_off + handler_size
snake_entry_vaddr = BASE + payload_off  # ARM entry (even)
handler_vaddr_thumb = BASE + handler_off + 1  # thumb

print(f"handler_off 0x{handler_off:x} vaddr thumb 0x{handler_vaddr_thumb:08x}")
print(f"payload_off 0x{payload_off:x} snake_entry 0x{snake_entry_vaddr:08x}")

# Build handler bytes with literal
handler_bytes = bytes.fromhex('00 B5 01 48 00 47 00 BD') + struct.pack('<I', snake_entry_vaddr)
assert len(handler_bytes)==12

# Build new user.bin: orig padded + handler + snake_raw + padding to keep structure?
new_ub = bytearray(ub)  # already padded
# Ensure new_ub length == handler_off (already)
# Append handler
new_ub.extend(handler_bytes)
assert len(new_ub) == payload_off
# Append snake
new_ub.extend(snake_raw)
print(f"new user.bin len {len(new_ub)} (added {len(new_ub)-orig_len})")

# 3. Patch dial string at 0x3264c4: change "*#677881#" to "*#555#"
str_off = 0x3264c4
old_str = new_ub[str_off:str_off+12]
print(f"old dial str at {str_off:x}: {old_str} hex {old_str.hex()}")
# "*#555#" is 6 chars, need 12 bytes slot: "*#555#\x00" + padding 5 zeros
new_str = b'*#555#\x00' + b'\x00'*5  # total 12? 6+1+5=12
# Verify next string at 3264d0 should stay "*#326658#"
# Our new_str occupies 0x3264c4..0x3264cf, next at 0x3264d0, no overlap
new_ub[str_off:str_off+12] = new_str
print(f"new dial str: {new_ub[str_off:str_off+12]} hex {new_ub[str_off:str_off+12].hex()}")
print(f"next str at 3264d0: {new_ub[0x3264d0:0x3264d0+12]}")

# 4. Patch handler pointer at 0x140cac (entry 0x140ca0 +12)
handler_ptr_off = 0x140cac
old_ptr, = struct.unpack_from('<I', new_ub, handler_ptr_off)
print(f"old handler ptr at {handler_ptr_off:x}: {old_ptr:08x} -> off {old_ptr-BASE:x}")
new_ptr = handler_vaddr_thumb
struct.pack_into('<I', new_ub, handler_ptr_off, new_ptr)
print(f"new handler ptr: {new_ptr:08x}")

# 5. Verify thumb handler disasm quickly
try:
    from capstone import Cs, CS_ARCH_ARM, CS_MODE_THUMB
    md = Cs(CS_ARCH_ARM, CS_MODE_THUMB)
    for ins in md.disasm(handler_bytes[:8], handler_off):
        print(f"handler {ins.address:08x}: {ins.mnemonic} {ins.op_str} {ins.bytes.hex()}")
except: pass

# 6. Write temp user.bin and repack PAC via pac_repack logic
tmp_user = pathlib.Path(r"C:\Users\LENOVO\Desktop\cyclon\temp_user_555.bin")
tmp_user.write_bytes(bytes(new_ub))
print(f"wrote temp {tmp_user} {len(new_ub)}")

# Now repack PAC using pac_repack.py logic directly
# Reuse pac_repack code
import struct as st

HDR, ENT = 2124, 2580
def crc16_arc(data, crc=0):
    t=[]
    for i in range(256):
        c=i
        for _ in range(8):
            c=(c>>1)^0xA001 if c&1 else c>>1
        t.append(c)
    for b in data:
        crc=(crc>>8)^t[(crc^b)&0xFF]
    return crc

src = SRC_PAC
dst = DST_PAC
repl = {"user.bin": bytes(new_ub)}
d = bytearray(open(src,'rb').read())
count, = st.unpack_from('<I', d, 52+512+512)
start2, = st.unpack_from('<I', d, 52+512+512+4)
assert start2==HDR
ents, blobs = [], []
for i in range(count):
    e=start2+i*ENT
    ent=bytearray(d[e:e+ENT])
    size,=st.unpack_from('<I', ent, 1540)
    off,=st.unpack_from('<I', ent, 1552)
    fname=wstr(bytes(ent[4+512:4+1024]))
    data=bytes(d[off:off+size]) if size else b''
    if fname in repl:
        data=repl.pop(fname)
        print(f"replacing {fname}: {size} -> {len(data)}")
    ents.append(ent); blobs.append(data)
if repl:
    raise SystemExit("not found: "+",".join(repl))
pos=start2+count*ENT
for ent,data in zip(ents,blobs):
    if data:
        st.pack_into('<I', ent, 1540, len(data))
        st.pack_into('<I', ent, 1552, pos)
        pos+=len(data)
out=bytearray(d[:start2])
st.pack_into('<I', out, 48, pos)
for ent in ents: out+=ent
for data in blobs: out+=data
assert len(out)==pos
st.pack_into('<H', out, 2122, crc16_arc(bytes(out[HDR:])))
st.pack_into('<H', out, 2120, crc16_arc(bytes(out[:2120])))
open(dst,'wb').write(out)
print(f"wrote {dst} {len(out)} bytes")
# cleanup
# tmp_user.unlink()  # keep

# Verify new PAC can be read
new_ub2, _, _, _, _ = extract_user(dst)
print(f"verify new user len {len(new_ub2)}")
print(f"verify str {new_ub2[0x3264c4:0x3264d0]}")
v,_=struct.unpack_from('<I', new_ub2, 0x140cac)
print(f"verify ptr {v:08x}")
