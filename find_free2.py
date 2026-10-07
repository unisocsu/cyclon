import struct
def wstr(b): return b.decode('utf-16le','ignore').split('\x00')[0]
def extract(p,f):
    d=open(p,'rb').read()
    cnt,=struct.unpack_from('<I',d,52+512+512); st,=struct.unpack_from('<I',d,52+512+512+4)
    for i in range(cnt):
        e=st+i*2580;ent=d[e:e+2580];sz,=struct.unpack_from('<I',ent,1540);off,=struct.unpack_from('<I',ent,1552);fn=wstr(bytes(ent[4+512:4+1024]))
        if fn==f: return d[off:off+sz]
ub=extract(r'v1.0=עם סייר קבצים.pac','user.bin')
# find runs of same byte
best=[]
for target in [0x00, 0xFF, 0xCC, 0xAA]:
    cur=0; cur_start=0
    for i in range(len(ub)):
        if ub[i]==target:
            if cur==0: cur_start=i
            cur+=1
        else:
            if cur>=200:
                best.append((cur, cur_start, target))
            cur=0
best_sorted=sorted(best, reverse=True)
for l,s,t in best_sorted[:20]:
    print(f"byte {t:02x} run {hex(s)} len {l} ({l/1024:.1f}K)")
# also find any run of any byte repeated (like 00 or FF already covered, but check for 0x00 specifically)
# find largest zero run precisely
cur=0; cs=0; maxl=0; maxs=0
for i in range(len(ub)):
    if ub[i]==0:
        if cur==0: cs=i
        cur+=1
        if cur>maxl: maxl=cur; maxs=cs
    else:
        cur=0
print(f"max zero {hex(maxs)} len {maxl}")
# check for area near 0x700000 etc content
import struct
for off in [0x700000, 0x800000, 0x8c0000, 0x8d0000, 0x8e0000]:
    print(f"{hex(off)}: {ub[off:off+32].hex()}")

# check for free after 0x8e5000?
print("tail", ub[-512:].hex()[:200])
