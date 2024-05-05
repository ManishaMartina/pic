#include<pic.h>
#define in1 RB0
void DELAY(unsigned int t)
{
unsigned int i;
while(t--)
for(i=0;i<1257;i++);
}
void main()
{
TRISB=0X00;
in1=0;
while(1)
{
in1=1;
DELAY(10);
in1=0;
DELAY(10);
}
}