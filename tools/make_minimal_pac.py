#!/usr/bin/env python3
"""Create minimal PAC with only FDL+Kernel for fast RAM testing (2 sec flash vs 3 min)"""
import struct

HDR, ENT = 2124, 2580

def crc16_arc(data, crc=0):
    t=[]
    for i in range(256):
        c=i
        for _ in range(8):
            c = (c >> 1) ^ 0xA001 if c & 1 else c >> 1
        t.append(c)
    for b in data:
        crc = (crc >> 8) ^ t[(crc ^ b) & 0xFF]
    return crc

def wstr(b):
    return b.decode('utf-16le', 'ignore').split('\x00')[0]

src="QLYX_X30_V04_original.pac"
# Use the latest lcd kernel (precise v5)
kernel_path="baremetal-build/lcd_v5_kernel.bin"
# For RAM test, use the small ram_test.bin without header? For PAC we need header, so use lcd_v5_kernel
import pathlib
if not pathlib.Path(kernel_path).exists():
    kernel_path="baremetal-build/lcd_kernel.bin"
data=open(kernel_path,'rb').read()
print(f"kernel {kernel_path}: {len(data)} bytes")

d=bytearray(open(src,'rb').read())
count, = struct.unpack_from('<I', d, 52+512+512)
start, = struct.unpack_from('<I', d, 52+512+512+4)
print(f"orig PAC: {len(d)} bytes, {count} entries")

# Keep only FDL1, FDL2, Kernel (indices 0,1,18)
keep = {0,1,18}
# Also keep HWVer for safety? No, minimal
new_ents=[]
new_blobs=[]
for i in range(count):
    e=start+i*ENT
    ent=bytearray(d[e:e+ENT])
    size, = struct.unpack_from('<I', ent, 1540)
    off, = struct.unpack_from('<I', ent, 1552)
    fname=wstr(bytes(ent[4+512:4+1024]))
    part=wstr(bytes(ent[4:4+512]))
    blob=bytes(d[off:off+size]) if size else b''
    if i==18: # Kernel
        blob=data
        print(f"keep {i}: {part}/{fname} -> {len(blob)} (REPLACED)")
        new_ents.append(ent); new_blobs.append(blob)
    elif i in keep:
        print(f"keep {i}: {part}/{fname} -> {len(blob)}")
        new_ents.append(ent); new_blobs.append(blob)
    else:
        # Zero out other partitions
        print(f"drop {i}: {part}/{fname} ({size} bytes)")

# Rebuild PAC with only kept entries
new_count=len(new_ents)
pos=HDR+new_count*ENT
for ent, blob in zip(new_ents, new_blobs):
    struct.pack_into('<I', ent, 1540, len(blob))
    struct.pack_into('<I', ent, 1552, pos)
    pos+=len(blob)

out=bytearray(d[:HDR])
# Update count and start
struct.pack_into('<I', out, 52+512+512, new_count)
struct.pack_into('<I', out, 52+512+512+4, HDR)
struct.pack_into('<I', out, 48, pos)
for ent in new_ents:
    out+=ent
for blob in new_blobs:
    out+=blob
# Recalc CRCs
struct.pack_into('<H', out, 2122, crc16_arc(bytes(out[HDR:])))
struct.pack_into('<H', out, 2120, crc16_arc(bytes(out[:2120])))
open("qlyx_minimal_lcd.pac",'wb').write(out)
print(f"wrote qlyx_minimal_lcd.pac {len(out)} bytes ({len(out)/1024:.1f} KB) with {new_count} partitions")
# Also copy to Downloads
import shutil, pathlib
shutil.copy("qlyx_minimal_lcd.pac", r"C:\Users\LENOVO\Downloads\ram_minimal.pac")
print("copied to Downloads/ram_minimal.pac")
