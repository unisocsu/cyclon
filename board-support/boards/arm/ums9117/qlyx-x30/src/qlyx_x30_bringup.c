/* qlyx_x30_bringup.c — board bringup */
#include <nuttx/config.h>
#include <sys/types.h>
#include <debug.h>
#include <nuttx/board.h>

int qlyx_x30_bringup(void)
{
  return 0;
}

int board_app_initialize(uintptr_t arg)
{
  return qlyx_x30_bringup();
}
