#include<pic.h>
#define red1 RB0
#define yellow1 RB1
#define green1 RB2
#define red2 RB3
#define yellow2 RB4
#define green2 RB5
#define red3 RB6
#define yellow3 RB7
#define green3 RD0
#define red4 RD1
#define yellow4 RD2
#define green4 RD3
void delay(unsigned int);
void main()
{
TRISB=0X00;
TRISD=0X00;
while(1)
{
RB0=RB1=RB2=0X00;
RB3=RB4=RB5=0X00;
RB6=RB7=RD0=0X00;
RD1=RD2=RD3=0X00;
RB3=RB6=RD1=0XFF;
RB0=0XFF;
delay(50);
RB0=0X00;
delay(30);
RB1=0XFF;
delay(50);
RB1=0X00;
delay(10);
RB2=0XFF;
delay(50);
RB2=0X00;
delay(10);

RB0=RB6=RD1=0XFF;
RB3=0XFF;
delay(50);
RB3=0X00;
delay(30);
RB4=0XFF;
delay(50);
RB4=0X00;
delay(10);
RB5=0XFF;
delay(50);
RB5=0X00;
delay(10);

RB3=RB0=RD1=0XFF;
RB6=0XFF;
delay(50);
RB6=0X00;
delay(30);
RB7=0XFF;
delay(50);
RB7=0X00;
delay(10);
RD0=0XFF;
delay(50);
RD0=0X00;
delay(10);

RB3=RB6=RB0=0XFF;
RD1=0XFF;
delay(50);
RD1=0X00;
delay(30);
RD2=0XFF;
delay(50);
RD2=0X00;
delay(10);
RD3=0XFF;
delay(50);
RD3=0X00;
delay(10);
}
}
void delay(unsigned int dly)
{
int i,j;
for(i=0;i<dly;i++)
for(j=0;j<500;j++);
}


