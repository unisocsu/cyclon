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
#define SPI_BASE 0x70730000
static void spi_cmd(uint8_t c){ while((getreg32(SPI_BASE+0x0C)&0xFF00)!=0){} putreg32(c, SPI_BASE+0x00); delay(2000); }
static void spi_data(uint8_t d){ while((getreg32(SPI_BASE+0x0C)&0xFF00)!=0){} putreg32(d, SPI_BASE+0x00); delay(2000); }
void _start(void) __attribute__((naked,noreturn));
void _start(void){
    puts_s("\r\nLCD v4 precise 0x70730000\r\n");
    // GC9106 init precise from img_90000024.c:16969
    spi_cmd(0xFE); spi_cmd(0xFE); spi_cmd(0xEF); spi_cmd(0xB3); spi_data(3);
    spi_cmd(0xB6); spi_data(0x10); spi_cmd(0xAC); spi_data(0x0B); spi_cmd(0xA3); spi_data(0x11);
    spi_cmd(0x21); spi_cmd(0x36); spi_data(0xD0); spi_cmd(0x3A); spi_data(5);
    spi_cmd(0xB4); spi_data(0x21); spi_cmd(0xF0); spi_data(0x31); spi_data(0x4C); spi_data(0x24); spi_data(0x58); spi_data(0xA8); spi_data(0x26); spi_data(0x28); spi_data(0x00); spi_data(0x2C); spi_data(0x0C); spi_data(0x0C); spi_data(0x15); spi_data(0x15); spi_data(0x0F);
    spi_cmd(0xF1); spi_data(0x0E); spi_data(0x2D); spi_data(0x24); spi_data(0x3E); spi_data(0x99); spi_data(0x12); spi_data(0x13);
    delay(10000);
    spi_data(0x0D); spi_data(0x0D); spi_data(0x14); spi_data(0x13); spi_data(0x0F);
    spi_cmd(0x35); spi_cmd(0xFE); spi_cmd(0xFF); spi_cmd(0x11); delay(20000); spi_cmd(0x29); delay(20000);
    puts_s("GC9106 init done\r\n");
    // Try framebuffer at precise guess 0x80000000 (from earlier, but now precise)
    volatile uint32_t *fb=(volatile uint32_t*)0x80000000;
    for(int i=0;i<5000;i++) fb[i]=0xFFFF0000; // red
    puts_s("FB filled\r\n");
    while(1){ puts_s("v4 alive\r\n"); delay(3000000); }
}
