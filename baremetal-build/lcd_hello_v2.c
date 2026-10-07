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
static void put_hex(uint32_t v){ for(int i=28;i>=0;i-=4) putc("0123456789ABCDEF"[(v>>i)&0xF]); }

// GC9106 init sequence from img_90000024.c:16969 — 50 bytes
static const uint8_t gc9106_seq[] = {
  0xFE,0xFE,0xEF,0xB3,0x03,0xB6,0x10,0xAC,0x0B,0xA3,0x11,0x21,0x36,0xD0,0x3A,0x05,0xB4,0x21,0xF0,0x31,0x4C,0x24,0x58,0xA8,0x26,0x28,0x00,0x2C,0x0C,0x0C,
  0xFE,0xEF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF, // padding
};
static void spi_write(uint32_t base, uint8_t b){
    while((getreg32(base+0x0C)&0xFF00)!=0){}
    putreg32(b, base+0x00);
    delay(500);
}
static void try_base(uint32_t base){
    puts_s("TRY base 0x"); put_hex(base); puts_s("\r\n");
    for(int i=0;i<30;i++){ spi_write(base, gc9106_seq[i]); }
    delay(10000);
    // Try framebuffer white at 4 guesses
    uint32_t fbs[] = {0x80000000,0x81000000,0x82000000,0x83000000};
    for(int f=0;f<4;f++){
        volatile uint32_t *fb=(volatile uint32_t*)fbs[f];
        for(int i=0;i<2000;i++) fb[i]=0xFFFFFFFF;
    }
    puts_s(" base done\r\n");
}
void _start(void) __attribute__((naked,noreturn));
void _start(void){
    puts_s("\r\nLCD v2 start\r\n");
    uint32_t bases[] = {0x70010000,0x70100000,0x70200000,0x70300000,0x70400000,0x70500000,0x70600000,0x60000000,0x61000000,0x62000000,0x63000000,0x64000000,0x65000000,0x70000000,0x71000000};
    for(int i=0;i<15;i++){ try_base(bases[i]); delay(200000); }
    puts_s("LCD v2 done\r\n");
    while(1){ puts_s("alive\r\n"); delay(2000000); }
}
