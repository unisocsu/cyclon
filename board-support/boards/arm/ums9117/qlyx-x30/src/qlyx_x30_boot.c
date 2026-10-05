/* qlyx_x30_boot.c — board early init */
#include <nuttx/config.h>
#include <nuttx/board.h>
#include "chip.h"

void qlyx_x30_boardinitialize(void)
{
  /* UART already init in chip start */
}

void board_early_initialize(void)
{
  qlyx_x30_boardinitialize();
}
