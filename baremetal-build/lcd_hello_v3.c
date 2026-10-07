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
static const uint8_t gc9106_seq[] = {0xFE,0xFE,0xEF,0xB3,0x03,0xB6,0x10,0xAC,0x0B,0xA3,0x11,0x21,0x36,0xD0,0x3A,0x05,0xB4,0x21,0xF0,0x31,0x4C,0x24,0x58,0xA8,0x26,0x28,0x00,0x2C,0x0C,0x0C};
static void spi_write(uint32_t base, uint8_t b){ while((getreg32(base+0x0C)&0xFF00)!=0){} putreg32(b, base+0x00); delay(5000); }
static void try_base(uint32_t base){
    puts_s("TRY 0x"); put_hex(base); puts_s("\r\n");
    for(int i=0;i<30;i++){ spi_write(base, gc9106_seq[i]); if(i%5==0) delay(20000); }
    delay(50000);
    uint32_t fbs[] = {0x80000000,0x81000000,0x82000000,0x83000000,0x84000000};
    for(int f=0;f<5;f++){ volatile uint32_t *fb=(volatile uint32_t*)fbs[f]; for(int i=0;i<4000;i++) fb[i]=0xFFFF00FF; }
}
void _start(void) __attribute__((naked,noreturn));
void _start(void){
    puts_s("\r\nLCD v3 precise 0x70730000\r\n");
    // Primary candidate from binary: 0x70730000 (found near ctl0 print)
    try_base(0x70730000);
    // Fallbacks
    uint32_t bases[] = {0x70730000,0x70010000,0x70100000,0x70200000,0x71000000,0x60000000};
    for(int i=0;i<6;i++){ try_base(bases[i]); delay(300000); }
    puts_s("LCD v3 done\r\n");
    while(1){ puts_s("alive v3\r\n"); delay(3000000); }
}
