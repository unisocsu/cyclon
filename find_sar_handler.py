import struct
def extract(p,f):
    import struct
    def wstr(b): return b.decode('utf-16le','ignore').split(chr(0))[0]
    d=open(p,'rb').read()
    cnt,=struct.unpack_from('<I',d,52+512+512); st,=struct.unpack_from('<I',d,52+512+512+4)
    for i in range(cnt):
        e=st+i*2580;ent=d[e:e+2580];sz,=struct.unpack_from('<I',ent,1540);off,=struct.unpack_from('<I',ent,1552);fn=wstr(bytes(ent[4+512:4+1024]))
        if fn==f: return d[off:off+sz]
ub=extract(r'v1.0=עם סייר קבצים.pac','user.bin')
# find all table entries at 0x140000 area
import struct
for off in range(0x140000, 0x141000, 16):
    try:
        a,b,c,dv=struct.unpack_from('<IIII', ub, off)
        if 0x88000000 <= a < 0x88900000 and 0x88000000 <= dv < 0x88900000:
            s_off=a-0x88000000
            if 0 <= s_off < len(ub)-10:
                s=ub[s_off:s_off+16].split(b'\x00')[0]
                if len(s)>=3:
                    # check if handler code near dv contains SAR string addr
                    h_off=dv-0x88000000
                    # disasm handler 64 bytes and look for ldr that loads SAR addr
                    # SAR string at 0x2e5f86 -> look for bytes 86 5f 2e
                    code=ub[h_off:h_off+64]
                    if b'\x86\x5f\x2e' in code:
                        print(f"handler {hex(dv)} for {s} at tbl {hex(off)} contains SAR bytes")
                        print(f" code {code.hex()}")
    except: pass
print("done")
# also search for MMI_AT_CODE_SAR string bytes in handlers
sar_off=ub.find(b'MMI_AT_CODE_SAR_WIN_ID')
print(f"SAR string at {hex(sar_off)}")
# find ldr that loads sar_off+base
for off in range(0x140000, 0x141000, 16):
    a,b,c,dv=struct.unpack_from('<IIII', ub, off)
    if 0x88000000 <= dv < 0x88900000:
        h_off=dv-0x88000000
        code=ub[h_off:h_off+128]
        # look for literal that equals sar_off+base
        for base in [0x88000000, 0x88200000]:
            val=sar_off+base
            if struct.pack('<I', val) in code:
                s_off=a-0x88000000
                s=ub[s_off:s_off+16].split(b'\x00')[0]
                print(f"handler {hex(dv)} for {s} loads SAR {hex(val)}")
