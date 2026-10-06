#include <stdint.h>
// RAM Hello World for UMS9117 via fprun (load 0x81730000)
// Based on pinmap.bin/LCD id 0x80009106 from SNAKE_X30_USB.zip
#define UART_BASE 0x70000000
#define UART_DATA 0x00
#define UART_STATUS 0x0C
#define UART_TXFULL 0xFF00

static inline void putreg32(uint32_t v, uint32_t a){ *(volatile uint32_t*)a = v; }
static inline uint32_t getreg32(uint32_t a){ return *(volatile uint32_t*)a; }

static void uart_putc(char c){
    while((getreg32(UART_BASE+UART_STATUS) & UART_TXFULL) != 0) {}
    putreg32((uint32_t)c, UART_BASE+UART_DATA);
}
static void uart_puts(const char *s){ while(*s) uart_putc(*s++); }
static void delay(volatile uint32_t n){ while(n--) __asm__ volatile("nop"); }

void _start(void) __attribute__((noreturn));
void _start(void){
    uart_puts("\r\n=== Cyclon RAM Hello World ===\r\n");
    uart_puts("Chip UMS9117 0x98180001\r\n");
    uart_puts("UART0 0x70000000 115200\r\n");
    uart_puts("LCD GC9106 id 0x80009106 pinmap.bin OK\r\n");
    uart_puts("Hello World from C! (fprun RAM 0x81730000)\r\n");
    uint32_t cnt=0;
    while(1){
        uart_puts("hello ");
        // print counter hex
        for(int i=28;i>=0;i-=4) uart_putc("0123456789ABCDEF"[(cnt>>i)&0xF]);
        uart_puts("\r\n");
        cnt++;
        delay(8000000);
    }
}
