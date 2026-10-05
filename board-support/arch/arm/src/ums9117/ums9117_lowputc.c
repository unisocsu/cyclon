/* ums9117_lowputc.c — UNISOC UMS9117 Low-Level UART Driver
 * Polling putchar for early console output.
 *
 * Register map verified from boot0.c:2667-2683 (FUN_00001dc2):
 *   +0x00 = TX Data (write byte)
 *   +0x0C = Status  (poll bits 8-15 = TX FIFO full)
 *
 * UART init verified from boot0.c:2749-2774 (FUN_00001e60):
 *   +0x10 = 0x00  (interrupts disabled)
 *   +0x18 = 0x1C  (FIFOs enabled)
 *   +0x1C = 0x00  (8N1)
 *   +0x24 = baud divisor low
 *   +0x28 = baud divisor high
 */

#include <nuttx/config.h>
#include <arch/board/board.h>
#include <arch/irq.h>

#include "ums9117_memorymap.h"

#include <nuttx/arch.h>
#include <arch/irq.h>

/* Simple register access */
static inline void putreg32(uint32_t value, uintptr_t addr)
{
  *((volatile uint32_t *)addr) = value;
}

static inline uint32_t getreg32(uintptr_t addr)
{
  return *((volatile uint32_t *)addr);
}

/* Initialize UART0 for 115200 8N1
 *
 * Baud divisor formula (from boot0.c:2758):
 *   divisor = (clock + baud/2) / baud
 *
 * Bootloader may already have UART active — we reinit to be safe.
 */
void ums9117_early_console_init(void)
{
  uint32_t divisor;
  uintptr_t base = UMS9117_UART0_BASE;

  /* Calculate baud divisor */
  divisor = (UMS9117_XTAL_FREQUENCY + 115200 / 2) / 115200;

  /* Disable interrupts */
  putreg32(0, base + UMS9117_UART_INTCTL);

  /* Enable TX/RX FIFOs (0x1C = enable both, clear FIFOs) */
  putreg32(0x1c, base + UMS9117_UART_FIFOCTL);

  /* Line control: 8N1 (8 data bits, no parity, 1 stop bit) */
  putreg32(0x00, base + UMS9117_UART_LCR);

  /* Modem control */
  putreg32(0x00, base + UMS9117_UART_MCR);

  /* Set baud divisor — low 16 bits then high 16 bits */
  putreg32(divisor & 0xffff, base + UMS9117_UART_BAUDL);
  putreg32(divisor >> 16,    base + UMS9117_UART_BAUDH);
}

/* Wait until TX FIFO has space, then write one byte.
 * Poll STATUS register bits 8-15 (TX FIFO full).
 */
void ums9117_lowputc(char ch)
{
  uintptr_t base = UMS9117_UART0_BASE;

  /* Wait while TX FIFO is full */
  while ((getreg32(base + UMS9117_UART_STATUS) & UMS9117_UART_STATUS_TXFULL) != 0)
    {
    }

  /* Write byte to TX data register */
  putreg32((uint32_t)ch, base + UMS9117_UART_DATA);

  /* Wait until transmission completes */
  while ((getreg32(base + UMS9117_UART_STATUS) & UMS9117_UART_STATUS_TXFULL) != 0)
    {
    }
}
