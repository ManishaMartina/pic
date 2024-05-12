#include<pic.h>
#define PINA RB0;
#define PINB RB1;
#define PINC RB2;
#define PIND RB3;
void main()
{
TRISB=0X00;
PORTB=0X00;
while(1)
{
unsigned int i;
RB0=RB1=RB2=RB3=0;
RB0=1;
RB1=RB2=RB3=0;
for(i=0;i<10000;i++);
RB1=1;
RB0=RB2=RB3=0;
for(i=0;i<10000;i++);
RB2=1;
RB0=RB1=RB3=0;
for(i=0;i<10000;i++);
RB3=1;
RB0=RB1=RB2=0;
for(i=0;i<10000;i++);
}
}
