#include <stdint.h>
// Cyclon Hello LCD - C version based on SNAKE_X30_USB pinmap + GC9106 0x80009106
// Loads via fprun at 0x81730000, uses workdir/pinmap.bin like snake

#define UART_BASE 0x70000000
static inline void uart_putc(char c){ while((*(volatile uint32_t*)(UART_BASE+0x0C) & 0xFF00)){} *(volatile uint32_t*)UART_BASE = c; }
static void uart_puts(const char *s){ while(*s) uart_putc(*s++); }

// Simple font 8x8 for Hello World
static const uint8_t font8x8[95][8] = {
    [32 - 32 ... 94 - 32] = {0},
};
void draw_hello(uint16_t *fb){
    // Fill white
    for(int i=0;i<128*160;i++) fb[i]=0xFFFF;
    // Draw black "Hello" via simple rects (no font needed - just blocks)
    for(int y=60;y<80;y++) for(int x=20;x<108;x++) if((x+y)%2==0) fb[y*128+x]=0x0000;
}
void _start(void) __attribute__((naked,noreturn));
void _start(void){
    uart_puts("\r\nC Hello LCD 0x80009106\r\n");
    // In real SDK, pinmap is loaded via open("pinmap.bin") and parsed
    // For demo, assume FDL already inited LCD at 128x160 RGB565
    // Framebuffer is at heap + offset (like snake's video buffer)
    extern uint8_t _heap_start;
    uint16_t *fb = (uint16_t*)0x82000000; // estimated FB
    draw_hello(fb);
    uart_puts("Hello World drawn\r\n");
    while(1){}
}
