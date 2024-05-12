#include<pic.h>
#define relay_pin RB0;
void delay_ms(int);
void main()
{
do
{
TRISB=0x00;
RB0=1;
delay_ms(10000);
RB0=0;
delay_ms(10000);
}
while(1);


}
void delay_ms(int k)
{
int j;
int i;
for(i=0;i<k;i++)
{
for(j=0;j<100;j++);
}
}