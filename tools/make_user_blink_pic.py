from keystone.keystone import Ks, KS_ARCH_ARM, KS_MODE_ARM, KS_MODE_THUMB
import pathlib

# PIC version for User partition - works at any load addr (0x82000000 etc)
# Use Thumb for user.bin (it starts with 0x47f0 -> Thumb)
CODE = """
.thumb
_start:
    ldr r0, =0x70100000
    bl oem_init
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
    str r1, [r0]
    ldr r2, =0x5000
d6: subs r2, #1
    bne d6
    bx lr
"""
ks = Ks(KS_ARCH_ARM, KS_MODE_THUMB)
encoding, count = ks.asm(CODE, addr=0)
print(f"THUMB PIC {len(encoding)} bytes {count} insns")
# For User, DHTB header 512 + code, but user.bin is Thumb so header still 512
hdr = bytearray(512)
hdr[0:4]=b"DHTB"
orig = pathlib.Path(r"C:\Users\LENOVO\Desktop\cyclon\pac-c-decompilation_extracted\original\user.bin").read_bytes()[:512]
hdr[4:]=orig[4:512]
out = bytes(hdr) + bytes(encoding)
pathlib.Path(r"C:\Users\LENOVO\Desktop\cyclon\baremetal-build\user_blink_pic.bin").write_bytes(bytes(encoding))
pathlib.Path(r"C:\Users\LENOVO\Desktop\cyclon\baremetal-build\user_blink_pic_kernel.bin").write_bytes(out)
print(f"wrote user_blink_pic_kernel.bin {len(out)}")
# Also make ARM version for kernel test
CODE_ARM = CODE.replace(".thumb",".arm").replace("movs","mov").replace("push {lr}","push {lr}").replace("pop {pc}","pop {pc}")
ks2 = Ks(KS_ARCH_ARM, KS_MODE_ARM)
enc2,_ = ks2.asm(CODE_ARM.replace("movs","mov"), addr=0x80a06200)
print(f"ARM {len(enc2)}")
