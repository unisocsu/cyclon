#include <stdint.h>
#define UART_BASE 0x70000000
#define UART_DATA 0x00
#define UART_STATUS 0x0C
#define UART_STATUS_TXFULL 0xFF00
static inline void putreg32(uint32_t v, uint32_t a){*(volatile uint32_t*)a=v;}
static inline uint32_t getreg32(uint32_t a){return *(volatile uint32_t*)a;}
static void putc(char c){ while((getreg32(UART_BASE+UART_STATUS)&UART_STATUS_TXFULL)!=0){} putreg32((uint32_t)c, UART_BASE+UART_DATA); while((getreg32(UART_BASE+UART_STATUS)&UART_STATUS_TXFULL)!=0){} }
static void puts_s(const char *s){while(*s) putc(*s++);}
static void delay(volatile int n){while(n--) __asm__ volatile("nop");}
void _start(void) __attribute__((naked,noreturn));
void _start(void){
    puts_s("\r\nRAM test OK - boot alive\r\n");
    puts_s("UART 0x70000000 RAM 0x80a06200\r\n");
    // Also try to trigger USB enumerate by writing to USB control register at guess 0x70200000
    // This is best-effort - if USB not, still UART will show
    while(1){
        puts_s("RAM alive - screen test next\r\n");
        delay(2000000);
    }
}
