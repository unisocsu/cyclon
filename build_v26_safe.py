import struct, pathlib
SRC="v1.0=עם סייר קבצים.pac"
DST="v2.6=עם_סייר_קבצים+SNAKE_585_safe.pac"
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
    ent=bytearray(d[e:e+2580])
    sz,=struct.unpack_from('<I', ent, 1540)
    off,=struct.unpack_from('<I', ent, 1552)
    fid=wstr(bytes(ent[4:4+512]))
    fname=wstr(bytes(ent[4+512:4+1024]))
    data=bytes(d[off:off+sz]) if sz else b''
    ents.append(ent); blobs.append(data)
snake_full=pathlib.Path("prebuilt/usb_t117/snake.bin").read_bytes()
# SNAKE partition only, no split chunks
ents[13][4:4+512]=w16("SNAKE")
ents[13][4+512:4+1024]=w16("snake.bin")
struct.pack_into('<I', ents[13], 0x61c, 0x80000027)
blobs[13]=snake_full
print(f"SNAKE {len(snake_full)} in slot13")
ub=bytearray(blobs[7])
# handler at 0x1607fd: read SNAKE from NAND via SCI_FTL then bx
# For now, try simple memcpy from flash-mapped addr 0x9C000000 + 0x31e8dc0? Use 0x90000000 + offset? We'll try 0x90000000+0x31e8dc0
# SNAKE offset in PAC is 0x31e8dc0 (after repack it's start+cnt*ENT + offsets)
# After repack, SNAKE will be at pos = start+cnt*ENT + sum(sizes up to 12)
# Estimate: start 0x34a8 + 19*2580=0x34a8+0xC034=0xF4DC, plus blobs up to 12 ~ 35M, so ~0x31e8dc0 is correct
snake_flash=0x90000000+0x31e8dc0
handler_free=0x1607fd
from keystone.keystone import Ks, KS_ARCH_ARM, KS_MODE_THUMB
CODE=f"""
.thumb
    push {{lr}}
    ldr r0, =0x88000000
    ldr r1, ={hex(snake_flash)}
    ldr r2, =17456
copy:
    ldrb r3, [r1]
    strb r3, [r0]
    adds r0, #1
    adds r1, #1
    subs r2, #1
    bne copy
    ldr r0, =0x88000000
    bx r0
"""
ks=Ks(KS_ARCH_ARM, KS_MODE_THUMB)
enc,_=ks.asm(CODE, addr=BASE+handler_free)
print(f"handler {len(enc)} at {hex(handler_free)}")
if any(b!=0 for b in ub[handler_free:handler_free+len(enc)]):
    print("WARN handler not zero")
ub[handler_free:handler_free+len(enc)]=bytes(enc)
ub[0x32654c:0x32654c+12]=b'*#585#\x00'+b'\x00'*6
struct.pack_into('<II', ub, 0x140d60+4, 0x12, 0x0b)
handler_thumb=BASE+handler_free+1
struct.pack_into('<I', ub, 0x140d60+12, handler_thumb)
print(f"585 -> {hex(handler_thumb)}")
blobs[7]=bytes(ub)
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
