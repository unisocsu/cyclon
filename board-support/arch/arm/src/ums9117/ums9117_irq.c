/* ums9117_irq.c — stub IRQ handler for UMS9117 */
#include <nuttx/irq.h>
#include <arch/irq.h>
#include "chip.h"

void up_irqinitialize(void) {}
void *arm_doirq(int irq, void *regs) { return regs; }
