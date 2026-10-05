/* ums9117_head.S — minimal vector stub for NuttX armv7-a */
	.syntax unified
	.arm
	.section .vectors, "ax"
	.global _vectors
	.global __start
_vectors:
__start:
	ldr pc, =Reset_Handler
	b .
	b .
	b .
	b .
	b .
	b .
	b .
