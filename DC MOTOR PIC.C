#include<pic.h>
#define ser RB0
void delay(unsigned int t);
{
unsigned int i;
while(t--)
for(i=0;i<1257;i++);
}
void main()
{
RB0=0;
while(1)
{
RB0=1;
delay(100);
RB0=0;
delay(100);
}
}