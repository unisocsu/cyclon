import struct, pathlib
SRC="v1.0=עם סייר קבצים.pac"
DST="v2.4=עם_סייר_קבצים+SNAKE_split.pac"
HDR,ENT=2124,2580
BASE=0x88000000
def wstr(b): return b.decode('utf-16le','ignore').split('\x00')[0]
def w16(s): return s.encode('utf-16le').ljust(512, b'\x00')[:512]
d=bytearray(open(SRC,'rb').read())
cnt,=struct.unpack_from('<I', d, 52+512+512)
start,=struct.unpack_from('<I', d, 52+512+512+4)
ents=[]
blobs=[]
for i in range(cnt):
    e=start+i*ENT
    ent=bytearray(d[e:e+ENT])
    sz,=struct.unpack_from('<I', ent, 1540)
    off,=struct.unpack_from('<I', ent, 1552)
    fid=wstr(bytes(ent[4:4+512]))
    fname=wstr(bytes(ent[4+512:4+1024]))
    data=bytes(d[off:off+sz]) if sz else b''
    ents.append(ent)
    blobs.append(data)

# SNAKE partition in slot 13
snake_full=pathlib.Path("prebuilt/usb_t117/snake.bin").read_bytes()
snake_raw=snake_full[512:]
print(f"snake raw {len(snake_raw)}")
# Split into 4 chunks 4236 each (16944/4=4236)
chunks=[snake_raw[i*4236:(i+1)*4236] for i in range(4)]
print([len(c) for c in chunks])
# Free locations in user.bin .text (4.8K each) - choose 4 that are .text not BSS: 0x304745, 0x30ab75, 0x8c7980, 0x304000? Let's use first 4 from list that are .text
frees=[0x304745, 0x30ab75, 0x8c7980, 0x15a05d] # last may be BSS but try
ub=bytearray(blobs[7])
# Check frees are zeros
for off,c in zip(frees, chunks):
    if any(b!=0 for b in ub[off:off+len(c)]):
        print(f"WARN free {hex(off)} not zero")
    ub[off:off+len(c)]=c
    print(f"placed chunk at {hex(off)} len {len(c)}")

# Handler at 0x40376f? Instead use trampoline at 0x304745 is now used for chunk, need separate handler free.
# Use free at 0x162e42 (4.8K) for handler (small)
handler_free=0x162e42
print(f"handler free {hex(handler_free)} before {ub[handler_free:handler_free+16].hex()}")
from keystone.keystone import Ks, KS_ARCH_ARM, KS_MODE_THUMB
# Handler: memcpy 4 chunks from frees to 0x88000000 then bx 0x88000000
# Use Thumb code with ldr r0, =dest; ldr r1, =src; ldr r2, =len; loop
CODE=f"""
.thumb
    ldr r0, =0x88000000
    ldr r1, =0x{0x88000000+frees[0]:08x}
    movs r2, #0x42
    lsls r2, #6  // 0x42*64=0x1080=4236? Wait 0x42=66*64=4224 close, need 4236
    // Use exact 4236 = 0x108c
    // Do 4236 via 0x108c: movs r2, #0x8c; lsls r2, #4; adds r2, #0x10? Simpler use literal
    // Use literal pool
    bl copy
    ldr r0, =0x88000000
    bx r0
copy:
    ldrb r3, [r1]
    strb r3, [r0]
    adds r0, #1
    adds r1, #1
    subs r2, #1
    bne copy
    bx lr
"""
# For simplicity, use 4 separate copies with literals
CODE2=f"""
.thumb
    push {{lr}}
    ldr r0, =0x88000000
    ldr r1, =0x{0x88000000+frees[0]:08x}
    ldr r2, =4236
    bl do_copy
    ldr r1, =0x{0x88000000+frees[1]:08x}
    ldr r2, =4236
    bl do_copy
    ldr r1, =0x{0x88000000+frees[2]:08x}
    ldr r2, =4236
    bl do_copy
    ldr r1, =0x{0x88000000+frees[3]:08x}
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
enc,_=ks.asm(CODE2, addr=BASE+handler_free)
print(f"handler {len(enc)} at {hex(handler_free)}")
if any(b!=0 for b in ub[handler_free:handler_free+len(enc)]):
    print("WARN handler free not zero")
ub[handler_free:handler_free+len(enc)]=bytes(enc)
# string and table
ub[0x32654c:0x32654c+12]=b'*#555#\x00'+b'\x00'*5
b_val,c_val=0x12,0x0b
struct.pack_into('<II', ub, 0x140d60+4, b_val, c_val)
handler_thumb=BASE+handler_free+1
struct.pack_into('<I', ub, 0x140d60+12, handler_thumb)
print(f"handler thumb {hex(handler_thumb)}")
blobs[7]=bytes(ub)
# SNAKE partition still in slot13 for reference, but snake is now also split inside user.bin, so SNAKE partition not needed for this split method - keep it for now
ents[13][4:4+512]=w16("SNAKE")
ents[13][4+512:4+1024]=w16("snake.bin")
struct.pack_into('<I', ents[13], 0x61c, 0x80000027)
blobs[13]=snake_full
# rebuild
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
