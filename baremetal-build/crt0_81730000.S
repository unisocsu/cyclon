.thumb
.global _start
_start:
    mov r1, #0
    mcr p15, 0, r1, c7, c5, 0
    mrc p15, 0, r0, c1, c0, 0
    bic r0, #7
    orr r0, #0x1000
    mcr p15, 0, r0, c1, c0, 0
    msr cpsr_c, #0xdf
    ldr sp, =0x8100F000
    bl main
    b .
