
#include<PIC18F4550.h>
#include<stdio.h>
void main(void){
unsigned int  j[10]={1,2,3,4,5,6,7,8,9,0}, x=0;
TRISB=0; // port b as O/P
LATB=0;
//i=0x04;
//j=0x05;
for(int i1=0;i1<10;i1++){
    x=x+j[i1];
}

PORTB=x;
//PORTC=i;
//PORTD=j;
}
