from keystone.keystone import Ks, KS_ARCH_ARM, KS_MODE_ARM
import pathlib
# ARM mode - because t117_fdl data_exec() calls ((void(*)(void))start)() as ARM (no |1), snake.bin is ARM too
CODE = """
_start:
    ldr sp, =0x80025000   // init stack to safe RAM (FDL uses 0x8002xxxx region, avoid 0x80000000)
    ldr r0, =0x70000000
    adr r1, msg
    bl puts
    adr r1, msg2
    bl puts
    adr r1, msg3
    bl puts
    adr r1, hello
    bl puts
    b _start   // loop forever like snake, no return - fprun will keep program running

puts:
    stmfd sp!, {r4, lr}
    mov r4, r1
pl1:
    ldrb r1, [r4]
    cmp r1, #0
    beq pl2
    ldr r2, [r0, #0x0C]
    tst r2, #0xFF00
    bne pl1
    strb r1, [r0]
    add r4, r4, #1
    b pl1
pl2:
    ldmfd sp!, {r4, pc}

msg:  .asciz "\\r\\n=== QLYX CYCLON X30 Custom RAM Kernel ===\\r\\n"
msg2: .asciz "hellow world i qulyx cyclon x30 custom ram kernel\\r\\n"
msg3: .asciz "UMS9117 T117 GC9106 0x80009106 UART 0x70000000\\r\\n"
hello:.asciz "hellow world i qulyx cyclon x30 custom ram kernel\\r\\n"
"""
ks = Ks(KS_ARCH_ARM, KS_MODE_ARM)
enc, cnt = ks.asm(CODE, addr=0x81730200)
print(f"Thumb {len(enc)} bytes")
# For fprun, need DHTB header with correct size at 0x30
hdr = bytearray(512); hdr[0:4]=b"DHTB"
orig = pathlib.Path(r"C:\Users\LENOVO\Downloads\SNAKE_X30_USB\prebuilt\usb_t117\snake.bin").read_bytes()[:512]
hdr[4:]=orig[4:512]
import struct
struct.pack_into('<I', hdr, 0x30, len(enc))  # fix size
struct.pack_into('<I', hdr, 0x34, 0)  # clear extra
out = bytes(hdr) + bytes(enc)
pathlib.Path(r"C:\Users\LENOVO\Desktop\cyclon\baremetal-build\ram_hello_fprun.bin").write_bytes(out)
pathlib.Path(r"C:\Users\LENOVO\Desktop\cyclon\baremetal-build\ram_hello.bin").write_bytes(bytes(enc))
print(f"wrote fprun {len(out)} raw {len(enc)}")
# Also copy to Downloads for fprun test
import shutil
shutil.copy(r"C:\Users\LENOVO\Desktop\cyclon\baremetal-build\ram_hello_fprun.bin", r"C:\Users\LENOVO\Downloads\ram_hello_fprun.bin")
print("copied to Downloads")
