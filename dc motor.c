#include<pic.h>
#define motorpina=RB0;
#define motorpina=RB1;
void delay(void);
void main()
{
while(1)
{
TRISB=0X00;
RB0=0;
RB1=1;
delay();
RB0=1;
RB1=1;
delay();
RB0=1;
RB1=0;
delay();
RB0=0;
RB1=0;
delay();
}
}

void delay()
{
int i,j;
for(i=0;i<1000;i++)
{
for(j=0;j<1000;j++);
}
}
