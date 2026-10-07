from keystone.keystone import Ks, KS_ARCH_ARM, KS_MODE_ARM
import pathlib
CODE = """
_start:
    // enable clocks: *0x20C00000 = 0x19  (from kernel.c:50285)
    ldr r0, =0x20C00000
    mov r1, #0x19
    str r1, [r0]
    ldr r2, =0x200000
d0: subs r2, #1; bne d0

    ldr r4, =0x70100000
    bl try_base
    ldr r4, =0x70500000
    bl try_base
    ldr r4, =0x70730000
    bl try_base
    ldr r4, =0x70000000
    bl try_base
    b _start

try_base:
    push {r4, lr}
    mov r0, r4
    bl oem_init
    // blink 3 times on this base
    mov r5, #3
blink3:
    mov r0, r4; mov r1, #0x29; bl spi_cmd
    ldr r2, =0x600000
d1: subs r2, #1; bne d1
    mov r0, r4; mov r1, #0x28; bl spi_cmd
    ldr r2, =0x600000
d2: subs r2, #1; bne d2
    subs r5, #1; bne blink3
    pop {r4, pc}

spi_cmd:
    str r1, [r0]
    ldr r2, =0x8000
d3: subs r2, #1; bne d3
    bx lr
spi_data:
    str r1, [r0]
    ldr r2, =0x8000
d4: subs r2, #1; bne d4
    bx lr
oem_init:
    push {lr}
    mov r1, #0xFE; bl spi_cmd
    mov r1, #0xFE; bl spi_cmd
    mov r1, #0xEF; bl spi_cmd
    mov r1, #0xB3; bl spi_cmd; mov r1, #3; bl spi_data
    mov r1, #0xB6; bl spi_cmd; mov r1, #0x10; bl spi_data
    mov r1, #0xAC; bl spi_cmd; mov r1, #0x0B; bl spi_data
    mov r1, #0xA3; bl spi_cmd; mov r1, #0x11; bl spi_data
    mov r1, #0x36; bl spi_cmd; mov r1, #0xD0; bl spi_data
    mov r1, #0x3A; bl spi_cmd; mov r1, #5; bl spi_data
    mov r1, #0x11; bl spi_cmd
    ldr r2, =0x900000
d5: subs r2, #1; bne d5
    mov r1, #0x29; bl spi_cmd
    ldr r2, =0x900000
d6: subs r2, #1; bne d6
    pop {pc}
"""
ks = Ks(KS_ARCH_ARM, KS_MODE_ARM)
enc, cnt = ks.asm(CODE, addr=0x80a06200)
print(f"{len(enc)} bytes {cnt}")
hdr = bytearray(512); hdr[0:4]=b"DHTB"
orig = pathlib.Path(r"C:\Users\LENOVO\Desktop\cyclon\pac-c-decompilation_extracted\original\kernel.bin").read_bytes()[:512]
hdr[4:]=orig[4:512]
out = bytes(hdr)+bytes(enc)
pathlib.Path(r"C:\Users\LENOVO\Desktop\cyclon\baremetal-build\blink_multi.bin").write_bytes(bytes(enc))
pathlib.Path(r"C:\Users\LENOVO\Desktop\cyclon\baremetal-build\blink_multi_kernel.bin").write_bytes(out)
print(f"wrote {len(out)}")
