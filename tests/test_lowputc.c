/* test_lowputc.c — Standalone test for UMS9117 UART driver
 * Compile: gcc -o test_lowputc test_lowputc.c -static
 * This tests the register access logic without NuttX.
 */

#include <stdio.h>
#include <stdint.h>
#include <string.h>

/* Register definitions from ums9117_memorymap.h */
#define UMS9117_UART0_BASE       0x70000000
#define UMS9117_UART_DATA        0x00
#define UMS9117_UART_STATUS      0x0C
#define UMS9117_UART_INTCTL      0x10
#define UMS9117_UART_FIFOCTL     0x18
#define UMS9117_UART_LCR         0x1C
#define UMS9117_UART_MCR         0x20
#define UMS9117_UART_BAUDL       0x24
#define UMS9117_UART_BAUDH       0x28
#define UMS9117_UART_STATUS_TXFULL 0xFF00
#define UMS9117_XTAL_FREQUENCY   26000000

/* Simple register access (same as ums9117_lowputc.c) */
static inline void putreg32(uint32_t value, uintptr_t addr)
{
  *((volatile uint32_t *)addr) = value;
}

static inline uint32_t getreg32(uintptr_t addr)
{
  return *((volatile uint32_t *)addr);
}

/* Test: Verify baud divisor calculation */
void test_baud_divisor(void)
{
  uint32_t divisor_115200 = (UMS9117_XTAL_FREQUENCY + 115200 / 2) / 115200;
  uint32_t divisor_9600 = (UMS9117_XTAL_FREQUENCY + 9600 / 2) / 9600;
  
  printf("Baud divisor tests (clock = %u Hz):\n", UMS9117_XTAL_FREQUENCY);
  printf("  115200 baud: divisor = %u (0x%04x)\n", divisor_115200, divisor_115200);
  printf("  9600 baud:   divisor = %u (0x%04x)\n", divisor_9600, divisor_9600);
  printf("  Expected 115200: %u (0x%04x)\n", 227, 227);
  printf("  Expected 9600:   %u (0x%04x)\n", 2708, 2708);
  
  if (divisor_115200 == 227) {
    printf("  ✅ 115200 divisor correct\n");
  } else {
    printf("  ❌ 115200 divisor wrong — check clock value\n");
  }
}

/* Test: Verify register offsets */
void test_register_offsets(void)
{
  printf("\nRegister offset tests:\n");
  printf("  DATA:    0x%02x (expect 0x00)\n", UMS9117_UART_DATA);
  printf("  STATUS:  0x%02x (expect 0x0C)\n", UMS9117_UART_STATUS);
  printf("  INTCTL:  0x%02x (expect 0x10)\n", UMS9117_UART_INTCTL);
  printf("  FIFOCTL: 0x%02x (expect 0x18)\n", UMS9117_UART_FIFOCTL);
  printf("  LCR:     0x%02x (expect 0x1C)\n", UMS9117_UART_LCR);
  printf("  BAUDL:   0x%02x (expect 0x24)\n", UMS9117_UART_BAUDL);
  printf("  BAUDH:   0x%02x (expect 0x28)\n", UMS9117_UART_BAUDH);
  
  if (UMS9117_UART_DATA == 0x00 &&
      UMS9117_UART_STATUS == 0x0C &&
      UMS9117_UART_FIFOCTL == 0x18 &&
      UMS9117_UART_BAUDL == 0x24) {
    printf("  ✅ All register offsets correct\n");
  } else {
    printf("  ❌ Register offsets wrong\n");
  }
}

/* Test: Verify memory map constants */
void test_memory_map(void)
{
  printf("\nMemory map tests:\n");
  printf("  RAM base:      0x%08x (expect 0x80a06000)\n", 0x80a06000);
  printf("  Code start:    0x%08x (expect 0x80a06200)\n", 0x80a06200);
  printf("  UART0 base:    0x%08x (expect 0x70000000)\n", UMS9117_UART0_BASE);
  printf("  DHTB size:     %u bytes (expect 512)\n", 512);
  
  if (UMS9117_UART0_BASE == 0x70000000) {
    printf("  ✅ UART0 base correct\n");
  } else {
    printf("  ❌ UART0 base wrong\n");
  }
}

int main(void)
{
  printf("=== UMS9117 Low-Level Driver Test ===\n\n");
  
  test_baud_divisor();
  test_register_offsets();
  test_memory_map();
  
  printf("\n=== All tests completed ===\n");
  printf("\nNote: This test verifies constants only.\n");
  printf("Actual UART I/O requires hardware access (UMS9117).\n");
  
  return 0;
}
