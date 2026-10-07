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
// Try to find and call GC9106_Init from img_90000024.bin in RAM
typedef void (*gc9106_init_t)(void);
void _start(void) __attribute__((naked,noreturn));
void _start(void){
    puts_s("\r\nLCD v5 search GC9106\r\n");
    // Candidate RAM bases where img_90000024 may be loaded
    uint32_t bases[] = {0x80000000,0x81000000,0x82000000,0x83000000,0x84000000,0x85000000,0x86000000,0x87000000};
    for(int b=0;b<8;b++){
        uint32_t base=bases[b];
        puts_s("Scan 0x"); put_hex(base); puts_s("\r\n");
        // Search for "GC9106" string
        for(uint32_t addr=base; addr<base+0x300000; addr+=4){
            uint32_t v=*(volatile uint32_t*)addr;
            // "GC91" little endian = 0x39314347
            if(v==0x39314347 || v==0x36313947){ // "GC91" or "9106" variant
                puts_s("Found GC9106 str at 0x"); put_hex(addr); puts_s("\r\n");
                // Try to call GC9106 init at nearby code: search for function prologue near string
                // The string s_GC9106_Init_00015034 is at 0x15034 offset in img file, code at 0x14a64
                // So code is ~0x5D0 bytes before string
                uint32_t code_addr = addr - 0x5D0;
                puts_s("Try call 0x"); put_hex(code_addr); puts_s("\r\n");
                gc9106_init_t f=(gc9106_init_t)code_addr;
                // Try calling if address looks like code (thumb? arm? check first bytes)
                uint32_t first=*(volatile uint32_t*)code_addr;
                puts_s(" first bytes 0x"); put_hex(first); puts_s("\r\n");
                // Call it
                f();
                puts_s("Called\r\n");
                delay(500000);
                // Try framebuffer white at same base+offset guess
                volatile uint32_t *fb=(volatile uint32_t*)(base+0x100000);
                for(int i=0;i<4000;i++) fb[i]=0xFFFFFFFF;
                puts_s("FB filled\r\n");
                while(1){ puts_s("v5 alive\r\n"); delay(3000000); }
            }
        }
    }
    puts_s("GC9106 not found, fallback brute\r\n");
    while(1){ puts_s("v5 fail\r\n"); delay(3000000); }
}
