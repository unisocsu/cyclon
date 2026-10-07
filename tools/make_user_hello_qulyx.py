from keystone.keystone import Ks, KS_ARCH_ARM, KS_MODE_THUMB
import pathlib, struct
# PIC Thumb for USER - hellow world i qulyx cyclon x30 custom ram kernel
CODE = """
.thumb
_start:
    ldr r0, =0x70100000
    bl oem_init
    // UART hello
    adr r1, msg
    bl puts
    // LCD fill magenta 0xF81F + white blocks for text (reuse fb 0x20800000 if LCDC, else SPI)
    ldr r2, =0x20800000
    ldr r3, =0x5000  // 0x5000 = 20480 = 128*160
fill:
    movs r1, #0x1F
    lsls r1, #8
    adds r1, #0xF8   // 0xF81F
    strh r1, [r2]
    adds r2, #2
    subs r3, #1
    bne fill
    // draw 4 lines of white blocks (like t117)
    ldr r2, =0x20800000
    movs r0, #40
    // msg "hellow world" 12 chars -> blocks
    // simplified: just draw border
    // loop forever blink
blink:
    movs r1, #0x29
    bl spi_cmd
    ldr r2, =0x800000
d1: subs r2, #1
    bne d1
    movs r1, #0x28
    bl spi_cmd
    ldr r2, =0x800000
d2: subs r2, #1
    bne d2
    b blink

spi_cmd:
    ldr r0, =0x70100000
    str r1, [r0]
    ldr r2, =0x5000
d3: subs r2, #1
    bne d3
    bx lr

oem_init:
    push {lr}
    movs r1, #0xFE; bl spi_cmd
    movs r1, #0xFE; bl spi_cmd
    movs r1, #0xEF; bl spi_cmd
    movs r1, #0xB3; bl spi_cmd; movs r1, #3; bl spi_data
    movs r1, #0xB6; bl spi_cmd; movs r1, #0x10; bl spi_data
    movs r1, #0xAC; bl spi_cmd; movs r1, #0x0B; bl spi_data
    movs r1, #0xA3; bl spi_cmd; movs r1, #0x11; bl spi_data
    movs r1, #0x36; bl spi_cmd; movs r1, #0xD0; bl spi_data
    movs r1, #0x3A; bl spi_cmd; movs r1, #5; bl spi_data
    movs r1, #0x11; bl spi_cmd
    ldr r2, =0x900000
d4: subs r2, #1; bne d4
    movs r1, #0x29; bl spi_cmd
    ldr r2, =0x900000
d5: subs r2, #1; bne d5
    pop {pc}

spi_data:
    ldr r0, =0x70100000
    str r1, [r0]
    ldr r2, =0x5000
d6: subs r2, #1
    bne d6
    bx lr

puts:
    push {r4, lr}
    mov r4, r1
pl1: ldrb r1, [r4]
    cmp r1, #0
    beq pl2
    ldr r0, =0x70100000
    ldr r2, [r0, #0x0C]
    tst r2, #0xFF00
    bne pl1
    strb r1, [r0]
    adds r4, #1
    b pl1
pl2: pop {r4, pc}

msg: .asciz "hellow world i qulyx cyclon x30 custom ram kernel\\r\\n"
"""
ks = Ks(KS_ARCH_ARM, KS_MODE_THUMB)
enc, cnt = ks.asm(CODE, addr=0)
print(f"THUMB PIC {len(enc)} bytes")
hdr = bytearray(512)
hdr[0:4]=b"DHTB"
orig = pathlib.Path(r"C:\Users\LENOVO\Desktop\cyclon\v1.0=עם סייר קבצים.pac")
# get header from original pac's user.bin via pac_repack extraction
import struct
d=open(orig,'rb').read()
count, = struct.unpack_from('<I', d, 52+512+512)
start, = struct.unpack_from('<I', d, 52+512+512+4)
HDR,ENT=2124,2580
def wstr(b): return b.decode('utf-16le','ignore').split('\x00')[0]
for i in range(count):
    e=start+i*ENT
    ent=d[e:e+ENT]
    size, = struct.unpack_from('<I', ent, 1540)
    fname=wstr(bytes(ent[4+512:4+1024]))
    if fname=='user.bin':
        off, = struct.unpack_from('<I', ent, 1552)
        user_hdr = d[off:off+512]
        hdr[4:]=user_hdr[4:512]
        break
out = bytes(hdr) + bytes(enc)
# pad to original user.bin size 9331028
orig_size = 9331028
if len(out) < orig_size:
    out = out + b'\x00'*(orig_size - len(out))
else:
    out = out[:orig_size]
pathlib.Path(r"C:\Users\LENOVO\Desktop\cyclon\baremetal-build\user_hello_qulyx.bin").write_bytes(out)
print(f"wrote {pathlib.Path(r'C:\Users\LENOVO\Desktop\cyclon\baremetal-build\user_hello_qulyx.bin')} {len(out)}")

