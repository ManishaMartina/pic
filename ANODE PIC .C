#include<pic.h>
void main(){
unsigned char a;
unsigned char seg[9]={0XC0,0XF9,0XA4,0XB0,0X99,0X82,0XF8,0X80,0X90};
unsigned int i;
TRISB = 0x00;
while(1){
for (a=0; a<9;a++){
PORTB = seg[a];
for (i=0; i<5000;i++);
}
}
}