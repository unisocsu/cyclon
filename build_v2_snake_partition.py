import struct, pathlib
SRC="v1.0=עם סייר קבצים.pac"
DST="v2.0=עם_סייר_קבצים+SNAKE_part.pac"
SNAKE="prebuilt/usb_t117/snake.bin"
HDR,ENT=2124,2580
def wstr(b): return b.decode('utf-16le','ignore').split('\x00')[0]
def w16(s): return s.encode('utf-16le').ljust(512, b'\x00')[:512]

# 1. Load PAC and find free slot 13 FLASH_07
d=bytearray(open(SRC,'rb').read())
cnt,=struct.unpack_from('<I', d, 52+512+512)
start,=struct.unpack_from('<I', d, 52+512+512+4)
print(f"cnt {cnt} start {start}")
# find entry 13
e13=start+13*ENT
ent13=bytearray(d[e13:e13+ENT])
fid=wstr(ent13[4:4+512])
fn=wstr(ent13[4+512:4+1024])
sz,=struct.unpack_from('<I', ent13, 1540)
print(f"slot 13 before: id='{fid}' file='{fn}' sz {sz}")
# prepare snake data
snake_data=pathlib.Path(SNAKE).read_bytes()
print(f"snake {len(snake_data)}")
# patch entry 13 to SNAKE
# ID field at 4, file at 4+512
ent13[4:4+512]=w16("SNAKE")
ent13[4+512:4+1024]=w16("snake.bin")
struct.pack_into('<I', ent13, 1540, len(snake_data))
# offset will be recomputed later, set dummy
# also need to set flag? At 0? Let's keep original flag bytes
# Write back ent13 to PAC's entry area (we will rebuild)
# Instead rebuild whole PAC with new entry
# Collect all entries and blobs
ents=[]
blobs=[]
for i in range(cnt):
    e=start+i*ENT
    ent=bytearray(d[e:e+ENT])
    sz,=struct.unpack_from('<I', ent, 1540)
    off,=struct.unpack_from('<I', ent, 1552)
    fname=wstr(bytes(ent[4+512:4+1024]))
    fid=wstr(bytes(ent[4:4+512]))
    data=bytes(d[off:off+sz]) if sz else b''
    if i==13:
        # replace with snake
        print(f"replacing slot 13 {fid}->{'SNAKE'} {sz}->{len(snake_data)}")
        # update ID and filename in ent
        ent[4:4+512]=w16("SNAKE")
        ent[4+512:4+1024]=w16("snake.bin")
        data=snake_data
        # also need to update size/offset later
    ents.append(ent)
    blobs.append(data)

# also need to handle kernel BML table addition: patch kernel.bin's BML table at 0xB8BD80
# Find kernel blob index 18
k_idx=18
k_data=bytearray(blobs[k_idx])
# BML table at 0xB8BD80, add "BML SNAKE Partition" after "BML MMI Resource Partition"
off_bml=0xB8BD80
# dump around
print(f"kernel BML before {k_data[off_bml:off_bml+64]}")
# Find end of MMI string: "BML MMI Resource Partition\x00\x00"
# Search for that
needle=b'BML MMI Resource Partition\x00'
idx=k_data.find(needle)
print(f"found MMI at {hex(idx)}")
if idx!=-1:
    end=idx+len(needle)+1 # include extra 00?
    # Actually after MMI there is \x00\x00, we want to insert after
    # Check bytes after
    print(f"after {k_data[end:end+32]}")
    # Insert new string "BML SNAKE Partition\x00\x00\x00" (pad to 4)
    new_str=b'BML SNAKE Partition\x00\x00\x00' # 20+3 pad?
    # Ensure 4-byte alignment
    # Insert by overwriting following zeros (there is padding)
    # At off_bml+? Let's just overwrite 32 bytes after MMI's \x00\x00 with new string
    # Find where next BML starts: search for "BML" after idx
    nxt=k_data.find(b'BML', idx+len(needle))
    print(f"next BML at {hex(nxt)}")
    # There is gap between MMI's \x00\x00 and next BML's "BML LTE..."
    # We can insert SNAKE there if gap large enough
    gap=nxt - (idx+len(needle)+2)
    print(f"gap {gap}")
    if gap >= len(new_str):
        k_data[idx+len(needle)+2: idx+len(needle)+2+len(new_str)] = new_str
        print(f"patched kernel BML at {hex(idx+len(needle)+2)}")
    else:
        print("no gap, appending at end of table (will shift, risky)")
        # fallback: append at end of table area 0xB8BEA8
        k_data[0xB8BEA8:0xB8BEA8+len(new_str)] = new_str
        print("patched at 0xB8BEA8")

blobs[k_idx]=bytes(k_data)
print(f"kernel patched {len(k_data)}")

# Now rebuild PAC
pos=start+cnt*ENT
for ent,data in zip(ents, blobs):
    if data:
        struct.pack_into('<I', ent, 1540, len(data))
        struct.pack_into('<I', ent, 1552, pos)
        pos+=len(data)
    else:
        # keep size 0 offset 0?
        struct.pack_into('<I', ent, 1540, 0)
        # offset stays 0
        pass

out=bytearray(d[:start])
# update total size at 48
struct.pack_into('<I', out, 48, pos)
for ent in ents: out+=ent
for data in blobs: out+=data
assert len(out)==pos
# CRC
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
print(f"wrote {DST} {len(out)} cnt {cnt}")
# verify
d2=bytearray(open(DST,'rb').read())
cnt2,=struct.unpack_from('<I', d2, 52+512+512)
print(f"verify cnt {cnt2}")
for i in range(cnt2):
    e=start+i*ENT
    ent=d2[e:e+ENT]
    fid=wstr(ent[4:4+512]); fn=wstr(ent[4+512:4+1024]); sz,=struct.unpack_from('<I', ent, 1540)
    if fid=="SNAKE" or fn=="snake.bin":
        print(f"found SNAKE slot {i} {fid} {fn} {sz}")
