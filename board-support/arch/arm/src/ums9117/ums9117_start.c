/* ums9117_start.c — UNISOC UMS9117 Startup Code
 *
 * Minimal startup for NuttX on UMS9117.
 * Runs after DHTB header is processed by boot1.
 *
 * Memory layout:
 *   0x80a06000: DHTB header (512 bytes, processed by bootloader)
 *   0x80a06200: Vector table + code (NuttX entry point)
 *   0x80a0623c: Reset handler (first execution point)
 */

#include <nuttx/config.h>

#include <arch/irq.h>
#include <nuttx/arch.h>
#include <arch/irq.h>

#include "chip.h"

/* Symbols from linker script */
extern uint32_t _sbss[];    /* Start of BSS */
extern uint32_t _ebss[];    /* End of BSS */
extern uint32_t _sdata[];   /* Start of data */
extern uint32_t _edata[];   /* End of data */

/* NuttX entry point */
extern void nx_start(void);

/* Stack pointer — set by linker script */
static uint32_t g_idle_stack[CONFIG_IDLETHREAD_STACKSIZE] aligned_data(8);

/* Vector table — must be at the start of the image */
void up_vector(void) naked_function;

void up_vector(void)
{
  __asm__ volatile(
    ".syntax unified\n"
    ".arm\n"
    ".section .vectors, \"ax\", %progbits\n"
    ".global _start\n"
    "_start:\n"
    "  ldr pc, =Reset_Handler\n"   /* Reset */
    "  b .\n"                       /* Undefined */
    "  b .\n"                       /* SWI */
    "  b .\n"                       /* Prefetch Abort */
    "  b .\n"                       /* Data Abort */
    "  b .\n"                       /* Reserved */
    "  b .\n"                       /* IRQ */
    "  b .\n"                       /* FIQ\n"
    ".syntax divided\n"
  );
}

/* Reset handler — first code that runs */
void Reset_Handler(void);

void Reset_Handler(void)
{
  /* 1. Clear BSS */
  uint32_t *bss = _sbss;
  while (bss < _ebss)
    {
      *bss++ = 0;
    }

  /* 2. Initialize early console (UART0 at 0x70000000) */
  ums9117_early_console_init();

  /* 3. Print startup message */
  ums9117_lowputc('\r');
  ums9117_lowputc('\n');
  const char *msg = "NuttX on UMS9117 (QLYX X30)\r\n";
  while (*msg)
    {
      ums9117_lowputc(*msg++);
    }

  /* 4. Initialize board-specific hardware */
  ums9117_board_initialize();

  /* 5. Enter NuttX */
  nx_start();

  /* Should never reach here */
  for (; ; )
    {
    }
}

/* Board initialization — minimal, expand as needed */
void ums9117_board_initialize(void)
{
  /* TODO: GPIO init, timer init, etc. */
  const char *msg = "Board init done.\r\n";
  while (*msg)
    {
      ums9117_lowputc(*msg++);
    }
}
