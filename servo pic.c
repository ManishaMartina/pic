#include<pic.h>
#define ser .RB0
void delay_ms(unsigned int i);
{
TRISB=0X00;
PORTB=0X00;
unsigned int t;
while(t--)
{
for(i=0;i<1257;i++);
}
}
void main()
{
RB0=0;
while(1)
{
RB0=1;
delay_ms(100);
RB0=0;
delay_ms(100);
}
}