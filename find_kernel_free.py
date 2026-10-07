import struct
def wstr(b): return b.decode('utf-16le','ignore').split('\x00')[0]
def extract(p,f):
    d=open(p,'rb').read()
    cnt,=struct.unpack_from('<I',d,52+512+512); st,=struct.unpack_from('<I',d,52+512+512+4)
    for i in range(cnt):
        e=st+i*2580;ent=d[e:e+2580];sz,=struct.unpack_from('<I',ent,1540);off,=struct.unpack_from('<I',ent,1552);fn=wstr(bytes(ent[4+512:4+1024]))
        if fn==f: return d[off:off+sz]
k=extract(r'v1.0=עם סייר קבצים.pac','kernel.bin')
print(len(k))
# find zero runs
best=[]
cur=0; cs=0
for i in range(len(k)):
    if k[i]==0:
        if cur==0: cs=i
        cur+=1
    else:
        if cur>5000:
            best.append((cur,cs))
        cur=0
best=sorted(best, reverse=True)
for l,s in best[:10]:
    print(f"zero {hex(s)} len {l} {l/1024:.1f}K")
# check at 0x80a... base?
print(k[0:4].hex(), k[512:520].hex())
