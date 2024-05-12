#include<pic.h>
#define led1 RB0;
#define led2 RB1;
void delay(unsigned int dly)
{
unsigned int i,j;
for(i=0;i<dly;i++)
{
for j=0;j<1000;j++);
}
}
void main()
{
TRISB=0X00;
PORTB=0X00;
while(1)
{
RB0=1;
delay(1000);
RB0=0;
delay(1000);
RB1=1;
delay(1000);
RB1=0;
delay(1000);
}
}