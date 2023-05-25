#include <xc.h>
#include<pic18f4550.h>
#include<stdio.h>
#define _XTAL_FREQ 8000000

int main() {
    TRISC = 0;
    
    while (1) {
        PORTC = 1;
        __delay_ms(150);
        
        PORTC = 0;
        __delay_ms(150);
    }
    
    return 0;
}
