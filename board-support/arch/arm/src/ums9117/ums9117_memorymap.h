/* ums9117_memorymap.h — UNISOC UMS9117 Memory Map
 * Extracted from decompiled QLYX X30 firmware
 * Evidence: kernel.bin vector table, kernel.c, boot0.c
 */

#ifndef __ARCH_ARM_SRC_UMS9117_MEMORYMAP_H
#define __ARCH_ARM_SRC_UMS9117_MEMORYMAP_H

/* RAM — kernel loaded at 0x80a06000, 12MB.
 * DHTB header = 512 bytes, so NuttX code starts at 0x80a06200.
 */
#define UMS9117_RAM_BASE         0x80a06000
#define UMS9117_RAM_SIZE         0x00C00000  /* 12 MB */
#define UMS9117_RAM_CODE_START   (UMS9117_RAM_BASE + 0x200) /* after DHTB header */

/* DMC/DDR PHY — LPDDR3 controller, NOT general-purpose RAM */
#define UMS9117_DMC_BASE         0x30000000

/* UART0 — confirmed from kernel.c:77351 (FUN_0007c744 returns 0x70000000) */
#define UMS9117_UART0_BASE       0x70000000
#define UMS9117_UART0_IRQ        18  /* 0x12 — from kernel.c:77374 */

/* UART register offsets — confirmed from boot0.c:2667-2683 (FUN_00001dc2) */
#define UMS9117_UART_DATA        0x00  /* TX/RX data register */
#define UMS9117_UART_STATE       0x04
#define UMS9117_UART_CTRL        0x08
#define UMS9117_UART_STATUS      0x0C  /* Poll bits 8-15 for TX FIFO full */
#define UMS9117_UART_INTCTL      0x10  /* Interrupt control */
#define UMS9117_UART_FIFOCTL     0x18  /* FIFO control — write 0x1c to enable */
#define UMS9117_UART_LCR         0x1C  /* Line control — 0x00 = 8N1 */
#define UMS9117_UART_MCR         0x20  /* Modem control */
#define UMS9117_UART_BAUDL       0x24  /* Baud divisor low 16 bits */
#define UMS9117_UART_BAUDH       0x28  /* Baud divisor high 16 bits */

/* UART status bits */
#define UMS9117_UART_STATUS_TXFULL  0xFF00  /* bits 8-15: TX FIFO full mask */

/* MMIO peripheral block — kernel.c references DAT_20c00000 */
#define UMS9117_PMU_BASE         0x20C00000

/* System clock (provisional — Spreadtrum standard, verify on hardware) */
#define UMS9117_XTAL_FREQUENCY   26000000  /* 26 MHz */

#endif /* __ARCH_ARM_SRC_UMS9117_MEMORYMAP_H */
