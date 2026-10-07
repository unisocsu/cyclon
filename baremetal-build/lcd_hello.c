#include <stdint.h>
#define UART_BASE 0x70000000
#define UART_DATA 0x00
#define UART_STATUS 0x0C
#define UART_STATUS_TXFULL 0xFF00

static inline void putreg32(uint32_t v, uint32_t a){*(volatile uint32_t*)a=v;}
static inline uint32_t getreg32(uint32_t a){return *(volatile uint32_t*)a;}
static void putc(char c){ while((getreg32(UART_BASE+UART_STATUS)&UART_STATUS_TXFULL)!=0){} putreg32((uint32_t)c, UART_BASE+UART_DATA); while((getreg32(UART_BASE+UART_STATUS)&UART_STATUS_TXFULL)!=0){} }
static void puts_s(const char *s){while(*s) putc(*s++);}
static void delay(volatile int n){while(n--) { __asm__ volatile("nop"); }}

// Try to write GC9106 init sequence to candidate SPI bases
// GC9106 init from img_90000024.c:16969 (FUN_00014a64) — 20 commands
// We will try to write via SPI data register at offset 0x00, status at 0x0C (like UART)
static void lcd_init_candidate(uint32_t base){
    // Helper to write SPI command/data: wait for not busy then write
    // For Spreadtrum SPI, data at +0x00, status at +0x0C similar
    // This is best-effort brute force — if base is wrong, it will just write to wrong address (harmless)
    // Sequence: 0xFE,0xFE,0xEF,0xB3,0x03,0xB6,0x10,0xAC,0x0B,0xA3,0x11,0x21,0x36,0xD0,0x3A,0x05,0xB4,0x21,0xF0,0x31...
    // We will just write them as bytes to SPI data register
    const uint8_t seq[] = {0xFE,0xFE,0xEF,0xB3,0x03,0xB6,0x10,0xAC,0x0B,0xA3,0x11,0x21,0x36,0xD0,0x3A,0x05,0xB4,0x21,0xF0,0x31};
    for(int i=0;i<20;i++){
        while((getreg32(base+0x0C)&0xFF00)!=0){}
        putreg32(seq[i], base+0x00);
        delay(1000);
    }
    // Try to fill framebuffer at guess 0x80000000 with white (if LCDC already configured)
    // This is speculative — if address is RAM, it will just write to RAM (harmless)
    volatile uint32_t *fb = (volatile uint32_t*)0x80000000;
    for(int i=0;i<1000;i++) fb[i] = 0xFFFFFFFF;
    fb = (volatile uint32_t*)0x81000000;
    for(int i=0;i<1000;i++) fb[i] = 0xFFFFFFFF;
}

void _start(void) __attribute__((naked, noreturn));
void _start(void){
    puts_s("\r\nLCD try start\r\n");
    // Try candidate SPI bases
    uint32_t candidates[] = {0x70010000, 0x70100000, 0x70200000, 0x60000000, 0x61000000};
    for(int c=0;c<5;c++){
        puts_s("Trying base 0x");
        // print hex candidate
        uint32_t b=candidates[c];
        for(int i=28;i>=0;i-=4){ char h="0123456789ABCDEF"[(b>>i)&0xF]; putc(h); }
        puts_s("\r\n");
        lcd_init_candidate(b);
        delay(500000);
    }
    puts_s("LCD init done, filling white\r\n");
    // Keep looping with UART heartbeat
    while(1){
        puts_s("LCD alive\r\n");
        delay(2000000);
    }
}
