#include<pic.h>
void delayms(unsigned int mscount)
{
unsigned int i,j;
for(i=0;i<mscount;i++)
{
for(j=0;j<1000;j++);
}
}
int main()
{
TRISA=0X00;
TRISB=0X00;
TRISC=0X00;
TRISD=0X00;
while(1)
{
PORTA=PORTB=PORTC=PORTD=0X00;
PORTA=0Xff;
delayms(10);
PORTA=0X00;
PORTB=0Xff;
delayms(10);
PORTB=0X00;
PORTC=0Xff;
delayms(10);
PORTC=0X00;
PORTD=0Xff;
delayms(10);
PORTD=0X00;
}
return (0);
}
