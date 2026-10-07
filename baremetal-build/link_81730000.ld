MEMORY { RAM (rwx) : ORIGIN = 0x81730000, LENGTH = 64K }
SECTIONS { .text : { *(.text*) *(.rodata*) } > RAM }
ENTRY(_start)
