import struct, pathlib
SRC="v2.1=עם_סייר_קבצים+SNAKE_fix.pac"
DST="v2.2=עם_סייר_קבצים+SNAKE_complete.pac"
HDR,ENT=2124,2580

def wstr(b): return b.decode('utf-16le','ignore').split('\x00')[0]

def extract_user(p):
    d=open(p,'rb').read()
    cnt,=struct.unpack_from('<I',d,52+512+512)
    start,=struct.unpack_from('<I',d,52+512+512+4)
    for i in range(cnt):
        e=start+i*ENT; ent=d[e:e+ENT]
        sz,=struct.unpack_from('<I',ent,1540); off,=struct.unpack_from('<I',ent,1552)
        fn=wstr(bytes(ent[4+512:4+1024]))
        if fn=='user.bin':
            return bytearray(d[off:off+sz]), d, cnt, start
    raise

ub, pac_data, cnt, start = extract_user(SRC)
print(f"extracted user.bin len {len(ub)}")

# We want *#555# to trigger snake.
# In v1.3 we used *#0606*# at 0x32654c -> changed to *#555#.
# Let's verify string at 0x32654c
print("str at 32654c before:", ub[0x32654c:0x32654c+12])
ub[0x32654c:0x32654c+12] = b'*#555#\x00' + b'\x00'*5

# Handler at 0x140d60: copy b,c from 0x140d70 (*#1234#)
b_val, c_val = struct.unpack_from('<II', ub, 0x140d70+4)
struct.pack_into('<II', ub, 0x140d60+4, b_val, c_val)

# Instead of complex NAND read (which requires complex MOCOR FTL thread context),
# what if we put snake raw in the free padding at the end of user.bin?
# Wait! Earlier we saw user.bin is 9,331,028 bytes, but what is its actual used size in headers?
# Let's check if we can extend user.bin safely without breaking mmi_res by putting snake in mmi_res padding or user.bin padding!
# user.bin has 9331028 bytes. Is there padding at the end?
# Let's check last 1024 bytes of user.bin: are they zeros?
tail = ub[-1024:]
zero_count = tail.count(b'\x00')
print(f"user.bin tail zero count in last 1024: {zero_count}")

# If user.bin has zeros at the end, we can append snake right inside user.bin without changing partition size!
# Let's find how many trailing zeros user.bin has:
trailing_zeros = 0
for b in reversed(ub):
    if b == 0: trailing_zeros += 1
    else: break
print(f"user.bin total trailing zeros: {trailing_zeros} ({trailing_zeros/1024:.1f} KB)")

# If trailing_zeros >= 17456, we can just put snake inside user.bin at orig_len - 17456!
# Let's check:
snake_len = 17456
if trailing_zeros >= snake_len:
    print(f"SUCCESS! user.bin has enough trailing zeros ({trailing_zeros} bytes >= {snake_len})!")
    snake_raw = pathlib.Path("prebuilt/usb_t117/snake.bin").read_bytes()[512:]
    snake_off = len(ub) - snake_len
    # align to 4
    snake_off = snake_off & ~3
    ub[snake_off:snake_off+len(snake_raw)] = snake_raw
    print(f"placed snake raw inside user.bin at offset {hex(snake_off)}")
    
    # Handler code: thumb code that copies snake from snake_off to 0x88000000 and branches to it!
    # Wait, in MOCOR, user.bin is loaded at some RAM address or executed.
    # Actually, if snake is inside user.bin at snake_off, what is its RAM address?
    # user.bin load address is usually 0x88000000 + something, or PIC.
    # But snake is bare-metal (expects 0x88000000 or absolute).
    # Since snake is position-dependent (it runs at 0x888e6160 or similar), copying to 0x88000000 is best.
    # Wait, can we just branch directly if user.bin is loaded at a known base?
    # Even simpler: handler code does memcpy from PC-relative offset to 0x88000000, then bx 0x88000000!
    # Let's write Thumb memcpy handler:
    # r0 = dest (0x88000000)
    # r1 = src (PC-relative to snake_off inside user.bin? Or since user.bin base is unknown, use ADR!)
    # ADR r1, snake_label
    # r2 = size (16944)
    # loop: ldrb r3, [r1], #1; strb r3, [r0], #1; subs r2, #1; bne loop
    # ldr r0, =0x88000000; bx r0
    
    from keystone.keystone import Ks, KS_ARCH_ARM, KS_MODE_THUMB
    # We can assemble using keystone:
    # But wait, to make it fully robust without PC-range issues, let's test if trailing zeros is enough first.
else:
    print(f"Not enough trailing zeros ({trailing_zeros} < {snake_len}), need another method.")
