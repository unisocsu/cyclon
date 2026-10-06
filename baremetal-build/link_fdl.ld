MEMORY { RAM (rwx) : ORIGIN = 0x80100000, LENGTH = 64K }
SECTIONS { .text : { *(.text*) } > RAM }
ENTRY(_start)
