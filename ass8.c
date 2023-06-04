#include<pic18f4550.h>
#include<stdio.h>
int main() {
    int a[5]={5,4,3,2,1},temp;
    for(int i=0;i<5;i++){
        for(int j=i;j<4;j++){
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            
            }
        }}
//        TRISB=0;
//        PORTB=a;
        int b[5]={1,2,3,4,5};
        for(int i=0;i<5;i++){
        for(int j=i;j<4;j++){
            if(b[j]<b[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            
            }
        }}
//        TRISC=0;
//        PORTC=b;
    
    return 0;
}

