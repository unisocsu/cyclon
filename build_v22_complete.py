import struct, pathlib
SRC="v1.0=עם סייר קבצים.pac"
DST="v2.2=עם_סייר_קבצים+SNAKE_v22.pac"
SNAKE="prebuilt/usb_t117/snake.bin"
HDR,ENT=2124,2580
BASE_OFF=0x61c
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

# Patch slot 13 FLASH_07 -> SNAKE
snake_data=pathlib.Path(SNAKE).read_bytes()
ents[13][4:4+512]=w16("SNAKE")
ents[13][4+512:4+1024]=w16("snake.bin")
struct.pack_into('<I', ents[13], BASE_OFF, 0x80000027)  # CODE type
blobs[13]=snake_data
print(f"SNAKE slot 13 Base 0x80000027 size {len(snake_data)}")

# Patch user.bin string and handler for *#555#
# Find user idx 7
ub=bytearray(blobs[7])
# string at 0x32654c -> *#555#
ub[0x32654c:0x32654c+12]=b'*#555#\x00'+b'\x00'*5
# table at 0x140d60 -> copy b,c from 0x140d70
b_val,c_val=struct.unpack_from('<II', ub, 0x140d70+4)
struct.pack_into('<II', ub, 0x140d60+4, b_val, c_val)
# Handler: small trampoline at 0x15a05d is not used; instead patch handler code at 0x40376f to do simple blink + branch to SNAKE RAM
# For now, make handler at 0x40376f just do infinite blink to prove *#555# works (like v1.7 but in-place at handler)
# Patch handler at 0x40376f (which is file manager) with trampoline that checks *#555# vs *#1234#
# Simpler: overwrite first 20 bytes of handler at 0x40376f with Thumb code that blinks (like before) - this will make BOTH *#555# and *#1234# blink, but proves handler
# Instead, we want *#555# blink and *#1234# remain file manager, so we need separate handler for 555 at free 0x15a05d
free=0x15a05d
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
enc,_=ks.asm(CODE, addr=0x88000000+free)
print(f"handler {len(enc)} at {hex(free)}")
# Check free area is zeros
if any(b!=0 for b in ub[free:free+len(enc)]):
    print("WARN free not zero")
ub[free:free+len(enc)]=bytes(enc)
# Point 555 handler to free
handler_thumb=0x88000000+free+1
struct.pack_into('<I', ub, 0x140d60+12, handler_thumb)
print(f"555 handler -> {hex(handler_thumb)}")
# 1234 remains at 0x40376f
blobs[7]=bytes(ub)

# Rebuild PAC
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
