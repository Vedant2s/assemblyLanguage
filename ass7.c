#include<pic18f4550.h>
#include<stdio.h>
int main() {
    int a[5]={5,4,3,2,1},temp;
    for(int i=0;i<5;i++){
        for(int j=i;j<5;j++){
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            
            }
        }}
        TRISB=0;
        PORTB=a;
        int b[5]={1,2,3,4,5};
        for(int i=0;i<5;i++){
        for(int j=i;j<5;j++){
            if(b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            
            }
        }}
        TRISC=0;
        PORTC=b;
    
    return 0;
}
