#include <stdint.h>
#define UART_BASE 0x70000000
#define UART_DATA 0x00
#define UART_STATUS 0x0C
#define UART_STATUS_TXFULL 0xFF00
static inline void putreg32(uint32_t v, uint32_t a){*(volatile uint32_t*)a=v;}
static inline uint32_t getreg32(uint32_t a){return *(volatile uint32_t*)a;}
static void putc(char c){ while((getreg32(UART_BASE+UART_STATUS)&UART_STATUS_TXFULL)!=0){} putreg32((uint32_t)c, UART_BASE+UART_DATA); while((getreg32(UART_BASE+UART_STATUS)&UART_STATUS_TXFULL)!=0){} }
static void puts_s(const char *s){while(*s) putc(*s++);}
static void put_hex(uint32_t v){ for(int i=28;i>=0;i-=4) putc("0123456789ABCDEF"[(v>>i)&0xF]); }
static void delay(volatile int n){while(n--) __asm__ volatile("nop");}
typedef void (*gc9106_init_t)(void);

// Precise OEM sequence from img_90000024.c:16975-17043 (FUN_00014a64)
static void gc9106_oem_sequence_via_spi(uint32_t spi_base){
    #define SPI_TX 0x00
    #define SPI_ST 0x0D  // word offset 0x34 bytes? but OEM uses +0x0D*4 = +0x34 for status
    // We use OEM's poll: wait while (base[0x0D] & 0x40)
    volatile uint32_t *b=(volatile uint32_t*)spi_base;
    #define WAIT() do{ volatile int to=500000; while((b[0x0D] & 0x40) && --to) __asm__ volatile("nop"); }while(0)
    #define CMD(c) do{ WAIT(); b[0]= (uint32_t)(c); delay(2000); }while(0)
    #define DAT(d) do{ WAIT(); b[0]= (uint32_t)(d); delay(2000); }while(0)
    // FUN_0000cd04 reset + CS would be here — we assume boot1 left it high
    delay(5000);
    CMD(0xFE); CMD(0xFE); CMD(0xEF); CMD(0xB3); DAT(3);
    CMD(0xB6); DAT(0x10); CMD(0xAC); DAT(0x0B); CMD(0xA3); DAT(0x11);
    CMD(0x21); CMD(0x36); DAT(0xD0); CMD(0x3A); DAT(5);
    CMD(0xB4); DAT(0x21); CMD(0xF0); DAT(0x31); DAT(0x4C); DAT(0x24); DAT(0x58); DAT(0xA8); DAT(0x26); DAT(0x28); DAT(0); DAT(0x2C); DAT(0x0C); DAT(0x0C); DAT(0x15); DAT(0x15); DAT(0x0F);
    CMD(0xF1); DAT(0x0E); DAT(0x2D); DAT(0x24); DAT(0x3E); DAT(0x99); DAT(0x12); DAT(0x13); DAT(0); DAT(10); DAT(0x0D); DAT(0x0D); DAT(0x14); DAT(0x13); DAT(0x0F);
    CMD(0x35); CMD(0xFE); CMD(0xFF); CMD(0x11); delay(20000); // 120ms in OEM: FUN_0000e1c0(0x78)
    CMD(0x29); delay(20000);
}

void _start(void) __attribute__((naked,noreturn));
void _start(void){
    puts_s("\r\n=== LCD v6 ultra-precise ===\r\n");
    // 1. Try to locate OEM SPI descriptor table (DAT_0000833c) from RAM
    // If img_90000024 is loaded at ~0x80C00000, DAT_0000833c is at file offset 0x833c -> RAM 0x80C0833c etc.
    // We probe 4 candidate Img24 bases seen in PAC analysis
    uint32_t img_bases[] = {0x80C00000, 0x80D00000, 0x81000000, 0x90000000};
    uint32_t spi_base = 0x70100000; // fallback
    uint32_t found_img = 0;
    for(int k=0;k<4;k++){
        uint32_t ib = img_bases[k];
        uint32_t cand_desc_ptr = ib + 0x833c;
        uint32_t val = *(volatile uint32_t*)cand_desc_ptr;
        puts_s("Probe Img24 base 0x"); put_hex(ib); puts_s(" desc_ptr 0x"); put_hex(cand_desc_ptr); puts_s(" =0x"); put_hex(val); puts_s("\r\n");
        if(val==0xFFFFFFFF || val==0) continue;
        // val should be pointer to descriptor array, e.g. 0x80C0xxxx. Validate
        if((val & 0xFF000000)!=0x80000000 && (val & 0xFF000000)!=0x90000000) continue;
        uint32_t dev0_desc = val; // DAT_0000833c points to array
        uint32_t b0 = *(volatile uint32_t*)(dev0_desc + 4);
        puts_s(" -> dev0 desc 0x"); put_hex(dev0_desc); puts_s(" base 0x"); put_hex(b0); puts_s("\r\n");
        if(b0==0 || b0==0xFFFFFFFF) continue;
        if((b0 & 0xFFF00000)==0x70000000 || (b0 & 0xFFF00000)==0x70100000 || (b0 & 0xFFF00000)==0x70500000 || (b0 & 0xF0000000)==0x70000000){
            spi_base = b0;
            found_img = ib;
            puts_s("FOUND SPI base 0x"); put_hex(spi_base); puts_s(" via Img24 0x"); put_hex(ib); puts_s("\r\n");
            break;
        }
    }
    if(!found_img){
        puts_s("Img24 not found, fallback SPI 0x"); put_hex(spi_base); puts_s("\r\n");
    }

    // 2. Dump SPI regs before
    volatile uint32_t *sp=(volatile uint32_t*)spi_base;
    puts_s("SPI regs: +0x00=0x"); put_hex(sp[0]); puts_s(" +0x0D=0x"); put_hex(sp[0x0D]); puts_s(" +0x14=0x"); put_hex(sp[0x14]); puts_s("\r\n");

    // 3. Try direct OEM sequence via discovered base
    puts_s("Send GC9106 OEM sequence...\r\n");
    gc9106_oem_sequence_via_spi(spi_base);
    puts_s("GC9106 sequence done\r\n");

    // 4. Also try calling OEM FUN_00014a64 if we found Img24 (safe, with Thumb bit)
    if(found_img){
        uint32_t str_addr = 0;
        for(uint32_t a=found_img; a<found_img+0x30000; a+=4){
            if(*(volatile uint32_t*)a==0x39314347){ // "GC91"
                str_addr=a; break;
            }
        }
        if(str_addr){
            puts_s("GC9106 str at 0x"); put_hex(str_addr); puts_s("\r\n");
            uint32_t code = (str_addr - 0x5D0) | 1; // Thumb
            uint32_t first = *(volatile uint32_t*)(code & ~1u);
            puts_s("Calc code 0x"); put_hex(code); puts_s(" first 0x"); put_hex(first); puts_s("\r\n");
            if(first!=0xFFFFFFFF && first!=0){
                puts_s("Calling OEM FUN_00014a64...\r\n");
                gc9106_init_t f=(gc9106_init_t)code;
                f();
                puts_s("OEM call returned\r\n");
                delay(20000);
            } else {
                puts_s("Skip OEM call (invalid)\r\n");
            }
        } else {
            puts_s("GC9106 str not found in Img24 range\r\n");
        }
    }

    puts_s("Filling LCD via SPI (white)...\r\n");
    // Use LCDC DMA? For SPI LCD we fill via SPI data
    for(int i=0;i<160*128;i++){
        volatile uint32_t *b=(volatile uint32_t*)spi_base;
        while((b[0x0D] & 0x40)){}
        b[0]=0xFFFF;
    }
    puts_s("Fill done, alive loop\r\n");
    while(1){ puts_s("v6 alive spi=0x"); put_hex(spi_base); puts_s("\r\n"); delay(4000000); }
}
