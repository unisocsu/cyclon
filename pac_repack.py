#!/usr/bin/env python3
"""Repack a Spreadtrum/UNISOC .pac, optionally replacing images.

Usage:
  python3 pac_repack.py original.pac output.pac [name=path ...]
    name = the image's file name inside the PAC (e.g. user.bin, mmi_res.bin)
    path = file whose contents replace it (any size)
With no replacements the output is byte-identical to the input.

Format (verified against QLYX_X30_V04): 2124-byte header, then 21 entries
of 2580 bytes, then the data. Per entry: size @+1540, data offset @+1552.
Header CRC (@2120) = CRC16/ARC over bytes [0:2120]; second CRC (@2122) =
CRC16/ARC over everything after the header ([2124:]). Total size @48.
"""
import struct, sys

HDR, ENT = 2124, 2580

def crc16_arc(data, crc=0):
    # table-driven CRC-16/ARC (poly 0xA001 reflected, init 0)
    t = []
    for i in range(256):
        c = i
        for _ in range(8):
            c = (c >> 1) ^ 0xA001 if c & 1 else c >> 1
        t.append(c)
    for b in data:
        crc = (crc >> 8) ^ t[(crc ^ b) & 0xFF]
    return crc

def wstr(b):
    return b.decode('utf-16le', 'ignore').split('\x00')[0]

def main():
    if len(sys.argv) < 3:
        print(__doc__); sys.exit(1)
    src, dst = sys.argv[1], sys.argv[2]
    repl = {}
    for a in sys.argv[3:]:
        k, v = a.split('=', 1)
        repl[k] = open(v, 'rb').read()
    d = bytearray(open(src, 'rb').read())
    count, = struct.unpack_from('<I', d, 52 + 512 + 512)
    start, = struct.unpack_from('<I', d, 52 + 512 + 512 + 4)
    assert start == HDR, 'unexpected layout'
    ents, blobs = [], []
    for i in range(count):
        e = start + i * ENT
        ent = bytearray(d[e:e + ENT])
        size, = struct.unpack_from('<I', ent, 1540)
        off, = struct.unpack_from('<I', ent, 1552)
        fname = wstr(bytes(ent[4 + 512:4 + 1024]))
        data = bytes(d[off:off + size]) if size else b''
        if fname in repl:
            data = repl.pop(fname)
            print(f'replacing {fname}: {size} -> {len(data)} bytes')
        ents.append(ent); blobs.append(data)
    if repl:
        sys.exit('not found in PAC: ' + ', '.join(repl))
    pos = start + count * ENT
    for ent, data in zip(ents, blobs):
        if data:  # empty entries keep their original size/offset fields
            struct.pack_into('<I', ent, 1540, len(data))
            struct.pack_into('<I', ent, 1552, pos)
            pos += len(data)
    out = bytearray(d[:start])
    struct.pack_into('<I', out, 48, pos)
    for ent in ents: out += ent
    for data in blobs: out += data
    assert len(out) == pos
    struct.pack_into('<H', out, 2122, crc16_arc(bytes(out[HDR:])))
    struct.pack_into('<H', out, 2120, crc16_arc(bytes(out[:2120])))
    open(dst, 'wb').write(out)
    print('wrote', dst, len(out), 'bytes')

main()
