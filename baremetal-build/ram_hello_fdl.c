#include <stdint.h>
#define UART_BASE 0x70000000
static inline void uart_putc(char c){ while((*(volatile uint32_t*)(0x70000000+0x0C) & 0xFF00)){} *(volatile uint32_t*)0x70000000 = c; }
static void uart_puts(const char *s){ while(*s) uart_putc(*s++); }
void _start(void) __attribute__((noreturn));
void _start(void){
    uart_puts("\r\nHello from C at 0x80100000\r\n");
    while(1) uart_puts("hello world\r\n");
}
