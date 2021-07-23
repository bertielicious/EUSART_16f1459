#include "config.h"
void configOsc(void)
{
    OSCCONbits.IRCF3 = HI;  // 16MHz internal clock selected
    OSCCONbits.IRCF2 = HI;
    //OSCCONbits.IRCF1 = LO; //4MHz
    OSCCONbits.IRCF1 = HI;  // 16MHz
    OSCCONbits.IRCF0 = HI;
    OSCCONbits.SCS1 = HI;   // internal oscillator block is selected
    OSCCONbits.SCS0 = HI;
}
/* For 9600 baud rate on UART, Fosc = 16MHz, #define _XTAL_FREQ 16000000
 For 2400 baud rate on UART, Fosc = 4MHz, #define _XTAL_FREQ 4000000*/