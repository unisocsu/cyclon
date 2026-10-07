#include <stdint.h>
#define FB ((uint16_t*)0x82000000)
void _start(void){ for(int i=0;i<128*160;i++) FB[i]=0xFFFF; while(1){} }
