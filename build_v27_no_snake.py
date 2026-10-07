import struct
SRC="v1.0=עם סייר קבצים.pac"
DST="v2.7=עם_סייר_קבצים+585_blink.pac"
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
# NO SNAKE partition, keep slot13 as is (FLASH_07 empty)
ub=bytearray(blobs[7])
handler_free=0x1607fd
from keystone.keystone import Ks, KS_ARCH_ARM, KS_MODE_THUMB
CODE="""
.thumb
    ldr r0, =0x70100000
    bl oem_init
blink:
    movs r1, #0x29
    bl spi_cmd
    ldr r2, =0x800000
d1: subs r2, #1
    bne d1
    movs r1, #0x28
    bl spi_cmd
    ldr r2, =0x800000
d2: subs r2, #1
    bne d2
    b blink
spi_cmd:
    str r1, [r0]
    ldr r2, =0x5000
d3: subs r2, #1
    bne d3
    bx lr
oem_init:
    push {lr}
    movs r1, #0xFE; bl spi_cmd
    movs r1, #0xFE; bl spi_cmd
    movs r1, #0xEF; bl spi_cmd
    movs r1, #0xB3; bl spi_cmd; movs r1, #3; bl spi_data
    movs r1, #0xB6; bl spi_cmd; movs r1, #0x10; bl spi_data
    movs r1, #0xAC; bl spi_cmd; movs r1, #0x0B; bl spi_data
    movs r1, #0xA3; bl spi_cmd; movs r1, #0x11; bl spi_data
    movs r1, #0x36; bl spi_cmd; movs r1, #0xD0; bl spi_data
    movs r1, #0x3A; bl spi_cmd; movs r1, #5; bl spi_data
    movs r1, #0x11; bl spi_cmd
    ldr r2, =0x900000
d4: subs r2, #1; bne d4
    movs r1, #0x29; bl spi_cmd
    ldr r2, =0x900000
d5: subs r2, #1; bne d5
    pop {pc}
spi_data:
    str r1, [r0]
    ldr r2, =0x5000
d6: subs r2, #1
    bne d6
    bx lr
"""
ks=Ks(KS_ARCH_ARM, KS_MODE_THUMB)
enc,_=ks.asm(CODE, addr=BASE+handler_free)
print(f"handler {len(enc)} at {hex(handler_free)}")
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
