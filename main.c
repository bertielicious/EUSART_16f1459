#include "config.h"
#include "configOsc.h"
#include "configPorts.h"
#include"configEUSART.h"
#include "configBaud.h"
int main(void)
{
    configOsc();
    configPorts();
    configEUSART();
    configBaud();
    printf("Philboi\n");
    while(1)
    {
        DIAGNOSTIC_LED = HI;
        __delay_ms(500);
        DIAGNOSTIC_LED = LO;
        __delay_ms(500);
     
       
    }
    
}
