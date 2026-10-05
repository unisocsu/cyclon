/* ums9117_start.c — UNISOC UMS9117 board initialization */
#include <nuttx/config.h>
#include <nuttx/board.h>
#include "chip.h"
#include "ums9117_memorymap.h"

void ums9117_board_initialize(void)
{
  /* Early console already init in lowputc */
  ums9117_early_console_init();
}
