/* chip.h — UNISOC UMS9117 Chip Definitions
 * NuttX architecture chip header for UMS9117 SoC
 */

#ifndef __ARCH_ARM_SRC_UMS9117_CHIP_H
#define __ARCH_ARM_SRC_UMS9117_CHIP_H

/* Memory map */
#include "ums9117_memorymap.h"

/* Number of IRQ lines supported by GIC */
#define UMS9117_NR_IRQS          128  /* 0x80 — from kernel.c ISR table */

/* UART count */
#define UMS9117_UART_NUM         2

/* UART base addresses */
#define UMS9117_UART0_BASE       0x70000000
#define UMS9117_UART1_BASE       0x70000400  /* estimate, verify on hardware */

/* UART IRQ numbers */
#define UMS9117_UART0_IRQ        18
#define UMS9117_UART1_IRQ        20

/* Timer — TODO: verify from kernel.c */
#define UMS9117_TIMER_IRQ        16  /* provisional */

/* GIC — Cortex-A GICv2 */
#define UMS9117_GIC_BASE         0x40000000  /* provision, verify from boot0.c */
#define UMS9117_GIC_DIST_SIZE    0x1000
#define UMS9117_GIC_CPU_SIZE     0x1000

/* Board identification */
#define UMS9117_BOARD_NAME       "qlyx-x30"
#define UMS9117_BOARD_CHIP       "UMS9117"

/* Low-level initialization functions (implemented in ums9117_lowputc.c) */
extern void ums9117_early_console_init(void);
extern void ums9117_lowputc(char ch);

/* Startup (ums9117_start.c) */
extern void ums9117_board_initialize(void);

#endif /* __ARCH_ARM_SRC_UMS9117_CHIP_H */
