#include<pic.h>
#define red RB0;
#define yellow RB1;
#define green RB2;
void main()
{
unsigned int i;
TRISB=0X00;
while(1)
{
RB0=0XFF;
for(i=0;i<60000;i++);
RB0=0X00;
RB1=0XFF;
for(i=0;i<60000;i++);
RB1=0X00;
RB2=0XFF;
for(i=0;i<60000;i++);
RB2=0X00;
}
}
