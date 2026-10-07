import struct
def wstr(b): return b.decode('utf-16le','ignore').split('\x00')[0]
def extract(p,f):
    d=open(p,'rb').read()
    cnt,=struct.unpack_from('<I',d,52+512+512); st,=struct.unpack_from('<I',d,52+512+512+4)
    for i in range(cnt):
        e=st+i*2580;ent=d[e:e+2580];sz,=struct.unpack_from('<I',ent,1540);off,=struct.unpack_from('<I',ent,1552);fn=wstr(bytes(ent[4+512:4+1024]))
        if fn==f: return d[off:off+sz]
ub=extract(r'v1.0=עם סייר קבצים.pac','user.bin')
for off in [0x15a05d, 0x8b2859, 0x8c7980, 0x8c0000]:
    print(f"--- {hex(off)} ---")
    print("before", ub[off-32:off].hex(' '))
    print("at    ", ub[off:off+32].hex(' '))
    print("end   ", ub[off+4923-16:off+4923+16].hex(' ') if off in [0x15a05d] else ub[off+2048-16:off+2048+16].hex(' ') if off==0x8c7980 else ub[off+32:off+64].hex(' '))
