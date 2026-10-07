MEMORY { RAM (rwx) : ORIGIN = 0x80a06200, LENGTH = 12M }
ENTRY(_start)
SECTIONS {
  .text : { KEEP(*(.text*)) *(.rodata*) } > RAM
  .data : { *(.data*) } > RAM
  .bss  : { *(.bss*) *(COMMON) } > RAM
}
