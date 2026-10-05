/* ums9117_start.c — UNISOC UMS9117 board initialization */
#include <nuttx/config.h>
#include <nuttx/board.h>
#include <nuttx/arch.h>
#include "chip.h"
#include "ums9117_memorymap.h"

void up_earlyinitialize(void)
{
  ums9117_early_console_init();
}

void up_initialize(void)
{
}

void ums9117_board_initialize(void)
{
  up_earlyinitialize();
}
