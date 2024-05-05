#include<pic.h>
#define r1 RB0;
#define r2 RB1;
#define r3 RB2;
#define r4 RB3;
#define c1 RB4;
#define c2 RB5;
#define c3 RB6;


#define rs=RC3;
#define rw=RC1;
#define en=RC2;
int sfr, lcd=0xa0;
void lcdcmd(unsigned char);
void lcddat(unsigned char);
void delay();
void delay1();
void main()
{
TRISA =0x00;
TRISC=0x01;
lcdcmd(0x38);
delay();
lcdcmd(0x01);
delay();
lcdcmd(0x06);
delay();
lcdcmd(0x0c);
delay();
lcdcmd(0x80);
delay();
while(1)
{
RB0=0;
if (RB4==0)
{
lcddat('1');
delay();
delay1();
}
if(RB5==0)
{
lcddat('2');
delay();
delay1();
}
if(RB6==0)
{
lcddat('3');
delay();
delay1();
}
RB0=1;RB1=0;
if(RB4==0)
{
lcddat('4');
delay();
delay1();
}
if(RB5==0)
{
lcddat('5');
delay();
}
if(RB6==0);
{
lcddat('6');
delay();
delay1();
}
RB1=1;RB2=0;
if(RB4==0)
{
lcddat('7');
delay();
delay1();
}
if(RB5==0)
{
lcddat('8');
delay();
delay();
}
if(RB6==0)
{
lcddat('9');
delay();
}
RB2=1;RB3=0;
if(RB4==0)
{
lcddat('+');
delay();
delay1();
}
if(RB5==0)
{
lcddat('*');
delay();
delay();
}
if(RB6==0)
{
lcddat('#');
delay();
delay1();
}
RB3=1;
}
}
void lcdcmd(unsigned char val)
{
TRISB=val;
RC0=0;
RC1=0;
RC2=1;
delay();
RC2=0;
}
void lcddat(unsigned char dat)
{
TRISB=dat;
RC0=1;
RC1=0;
RC2=1;
delay();
RC2=0;
}
void delay()
{
unsigned int i;
for(i=0;i<2000;i++);
}
void delay1()
{
unsigned int j,k;
for(j=0;j<200;j++)
for(k=0;k<2000;k++);
}