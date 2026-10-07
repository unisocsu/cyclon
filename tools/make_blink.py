from keystone.keystone import Ks, KS_ARCH_ARM, KS_MODE_ARM
import struct

CODE = """
_start:
    ldr r0, =0x70100000
    bl oem_init
blink:
    mov r1, #0x29
    bl spi_cmd
    ldr r2, =0x800000
d1:  subs r2, r2, #1
    bne d1
    mov r1, #0x28
    bl spi_cmd
    ldr r2, =0x800000
d2:  subs r2, r2, #1
    bne d2
    b blink

spi_cmd:
    str r1, [r0]
    ldr r2, =0x5000
d3:  subs r2, r2, #1
    bne d3
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
d4:  subs r2, r2, #1; bne d4
    mov r1, #0x29; bl spi_cmd
    ldr r2, =0x900000
d5:  subs r2, r2, #1; bne d5
    pop {pc}

spi_data:
    str r1, [r0]
    ldr r2, =0x5000
d6:  subs r2, r2, #1
    bne d6
    bx lr
"""

ks = Ks(KS_ARCH_ARM, KS_MODE_ARM)
encoding, count = ks.asm(CODE, addr=0x80a06200)
print(f"assembled {len(encoding)} bytes, {count} insns")
# Link at 0x80a06200, entry at _start
open(r"C:\Users\LENOVO\Desktop\cyclon\baremetal-build\blink.bin","wb").write(bytes(encoding))
# Add DHTB header (reuse logic from add_dhtb_header.py)
import pathlib
bin_data = bytes(encoding)
hdr = bytearray(512)
hdr[0:4]=b"DHTB"
# copy version from original kernel's header
orig = pathlib.Path(r"C:\Users\LENOVO\Desktop\cyclon\pac-c-decompilation_extracted\original\kernel.bin").read_bytes()[:512]
hdr[4:]=orig[4:512]
# ensure entry vector at offset 0x200 is set to 0x80a06200? The DHTB header is just prepended, kernel.bin's vector at 0x200 will be our _start after header
out = bytes(hdr) + bin_data
open(r"C:\Users\LENOVO\Desktop\cyclon\baremetal-build\blink_kernel.bin","wb").write(out)
print(f"wrote blink.bin {len(bin_data)} + hdr -> {len(out)}")
