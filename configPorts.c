#include "config.h"
void configPorts(void)
{
    ANSELA = 0x00;                  // disable all analogue inputs
    ANSELB = 0x00;
    ANSELC = 0x00;
    
    CM1CON0 = 0x00;                 // all COMPARATORS off
    CM2CON0 = 0x00;
    CM1CON1 = 0x00;
    CM2CON1 = 0x00;
    TRISBbits.TRISB5 = LO;  //RB5 pin 12    Diagnostic LED
    
    DIAGNOSTIC_LED = LO;     //turn off Diagnostic LED
}
