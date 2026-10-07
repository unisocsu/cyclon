import struct
def wstr(b): return b.decode('utf-16le','ignore').split('\x00')[0]
def extract(p,f):
    d=open(p,'rb').read()
    cnt,=struct.unpack_from('<I',d,52+512+512); st,=struct.unpack_from('<I',d,52+512+512+4)
    for i in range(cnt):
        e=st+i*2580;ent=d[e:e+2580];sz,=struct.unpack_from('<I',ent,1540);off,=struct.unpack_from('<I',ent,1552);fn=wstr(bytes(ent[4+512:4+1024]))
        if fn==f: return d[off:off+sz]
mmi=extract(r'v1.0=עם סייר קבצים.pac','mmi_res.bin')
print(len(mmi))
# find storage string
idx=mmi.find(b'Storage')
print(hex(idx))
# find pointer to it in mmi
import struct
# search for little endian value that equals idx + base
# try base 0x88000000, 0x89000000, 0x8a000000 etc.
for base in [0x88000000, 0x89000000, 0x8a000000, 0x8b000000, 0x90000000]:
    val=idx+base
    b=struct.pack('<I', val)
    cnt=mmi.count(b)
    if cnt:
        print(f"base {hex(base)} val {hex(val)} cnt {cnt}")
        pos=mmi.find(b)
        print(f" pos {hex(pos)} context {mmi[pos-16:pos+16].hex()}")

# find zero runs in mmi
best=[]
cur=0; cs=0
for i in range(len(mmi)):
    if mmi[i]==0:
        if cur==0: cs=i
        cur+=1
    else:
        if cur>5000:
            best.append((cur,cs))
        cur=0
best=sorted(best, reverse=True)
for l,s in best[:5]:
    print(f"zero {hex(s)} len {l}")

# check tail
print("tail", mmi[-64:].hex())
