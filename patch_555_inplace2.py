import struct
SRC="v1.0=עם סייר קבצים.pac"
DST="v1.6=עם_סייר_קבצים+555_debug2.pac"
BASE=0x88000000

def extract_user(p):
    import struct
    def wstr(b): return b.decode('utf-16le','ignore').split('\x00')[0]
    d=open(p,'rb').read()
    cnt,=struct.unpack_from('<I',d,52+512+512); st,=struct.unpack_from('<I',d,52+512+512+4)
    for i in range(cnt):
        e=st+i*2580; ent=d[e:e+2580]; sz,=struct.unpack_from('<I',ent,1540); off,=struct.unpack_from('<I',ent,1552); fn=wstr(bytes(ent[4+512:4+1024]))
        if fn=='user.bin':
            return d[off:off+sz], d, cnt, st
    raise
ub,_a,_b,_c=extract_user(SRC)
print(len(ub))

# string
new_ub=bytearray(ub)
new_ub[0x32654c:0x32654c+12]=b'*#555#\x00'+b'\x00'*5
# table b,c to match 1234
b_val,c_val=struct.unpack_from('<II', ub, 0x140d70+4)
struct.pack_into('<II', new_ub, 0x140d60+4, b_val, c_val)
# keep handler pointer at 0x84cb7f (already)
# overwrite handler code at 0x84cb7e with debug blink (in-place code replacement)
# handler is thumb at 0x84cb7e, pointer 0x84cb7f
from keystone.keystone import Ks, KS_ARCH_ARM, KS_MODE_THUMB
CODE = """
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
enc,_=ks.asm(CODE, addr=BASE+0x84cb7e)
print(f"enc {len(enc)}")
# ensure fits within handler area before next handler? Next handler after 0x84cb7e is maybe at 0x84cb8? but we have 200 bytes, check free: at 0x84cb7e+200 =0x84cc46, next data at? Original handler size maybe small, but we can overwrite 200 bytes safely if next is not critical. At 0x84cb7e+200 overlaps next handler at 0x84cc? Let's check.
# For safety truncate to 180? Our enc is 200, may overlap. Let's check what's at 0x84cc00 etc.
# We'll overwrite 200 bytes regardless.
if len(enc)> 400:
    raise
new_ub[0x84cb7e:0x84cb7e+len(enc)] = bytes(enc)
# pad rest with zeros if needed? Keep as is
print("patched handler at 84cb7e")

# repack size same
HDR,ENT=2124,2580
def wstr2(b): return b.decode('utf-16le','ignore').split('\x00')[0]
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
    e=start+i*ENT; ent=bytearray(d[e:e+ENT]); sz,=struct.unpack_from('<I',ent,1540); off,=struct.unpack_from('<I',ent,1552); fn=wstr2(bytes(ent[4+512:4+1024]))
    data=bytes(d[off:off+sz]) if sz else b''
    if fn in repl:
        data=repl.pop(fn); print(f"repl {fn}")
    ents.append(ent); blobs.append(data)
pos=start+count*ENT
for ent,data in zip(ents,blobs):
    if data:
        struct.pack_into('<I',ent,1540,len(data)); struct.pack_into('<I',ent,1552,pos); pos+=len(data)
out=bytearray(d[:start]); struct.pack_into('<I',out,48,pos)
for ent in ents: out+=ent
for data in blobs: out+=data
struct.pack_into('<H',out,2122,crc16_arc(bytes(out[HDR:])))
struct.pack_into('<H',out,2120,crc16_arc(bytes(out[:2120])))
open(DST,'wb').write(out)
print(f"wrote {DST} {len(out)}")
