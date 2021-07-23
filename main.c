#include <xc.h>
#include "config.h"

#define     LED     PORTDbits.RD2
#define     BOTAO   PORTDbits.RD0

void main(void) 
{
    TRISDbits.TRISD0 = 1;
    TRISDbits.TRISD2 = 0;
    
    while(1)
    {
        LED = BOTAO;
    }
    return;
}
