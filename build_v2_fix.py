import struct, pathlib
SRC="v1.0=עם סייר קבצים.pac"
DST="v2.1=עם_סייר_קבצים+SNAKE_fix.pac"
SNAKE="prebuilt/usb_t117/snake.bin"
HDR,ENT=2124,2580
def wstr(b): return b.decode('utf-16le','ignore').split('\x00')[0]
def w16(s): return s.encode('utf-16le').ljust(512, b'\x00')[:512]
d=bytearray(open(SRC,'rb').read())
cnt,=struct.unpack_from('<I', d, 52+512+512)
start,=struct.unpack_from('<I', d, 52+512+512+4)
# find kernel idx
k_idx=18
# extract kernel
ents=[]
blobs=[]
for i in range(cnt):
    e=start+i*ENT
    ent=bytearray(d[e:e+ENT])
    sz,=struct.unpack_from('<I', ent, 1540)
    off,=struct.unpack_from('<I', ent, 1552)
    fname=wstr(bytes(ent[4+512:4+1024]))
    data=bytes(d[off:off+sz]) if sz else b''
    ents.append(ent)
    blobs.append(data)
# patch kernel BML table at 0xB8BEA8 (end of table)
k_data=bytearray(blobs[k_idx])
off_bml=0xB8BEA8
# Check current at off_bml
print(f"before {k_data[off_bml:off_bml+32]}")
# Insert SNAKE string at off_bml if space (should be zeros after table)
# Table currently has at 0xB8BEA8: maybe zeros or next entry
# Let's dump
print(k_data[off_bml-16:off_bml+64].hex(' '))
# Write "S\x00\x00\x00BML SNAKE Partition\x00\x00\x00" ?
# Look at pattern: "K\x00\x00\x00A\x00\x00\x00BML ..." So each entry is ID char + 3 zeros + string
# For new entry, ID 'S' for SNAKE
new_entry=b'S\x00\x00\x00BML SNAKE Partition\x00\x00\x00'
print(f"new {new_entry}")
# Find free space at off_bml (should be 00's)
if all(b==0 for b in k_data[off_bml:off_bml+len(new_entry)]):
    k_data[off_bml:off_bml+len(new_entry)]=new_entry
    print(f"patched at {hex(off_bml)}")
else:
    # try next aligned
    for off in range(off_bml, off_bml+100, 4):
        if all(b==0 for b in k_data[off:off+len(new_entry)]):
            k_data[off:off+len(new_entry)]=new_entry
            print(f"patched at {hex(off)}")
            off_bml=off
            break
blobs[k_idx]=bytes(k_data)

# Now patch slot 13 for SNAKE partition
snake_data=pathlib.Path(SNAKE).read_bytes()
e13=start+13*ENT
# ents[13] is FLASH_07
ent13=ents[13]
ent13[4:4+512]=w16("SNAKE")
ent13[4+512:4+1024]=w16("snake.bin")
# will set size/offset in rebuild
blobs[13]=snake_data
print(f"snake {len(snake_data)}")

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
# verify
d2=bytearray(open(DST,'rb').read())
for i in range(cnt):
    e=start+i*ENT
    ent=d2[e:e+ENT]
    fid=wstr(ent[4:4+512]); fn=wstr(ent[4+512:4+1024]); sz,=struct.unpack_from('<I', ent, 1540)
    if fid=="SNAKE":
        print(f"SNAKE {i} {sz}")
k2=blobs[k_idx]
print(f"verify BML at {hex(off_bml)} {k2[off_bml:off_bml+32]}")
