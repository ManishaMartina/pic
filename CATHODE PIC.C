#include<pic.h>
void main(){
unsigned char a;
unsigned char seg[9]={0X3F,0X06,0X5B,0X4F,0X66,0X60,0X07,0X7F,0X67};
unsigned int i;
TRISB = 0x00;
            PORTB = 0x00;
while(1){
for (a=0; a<9;a++){
PORTB = seg[a];
for (i=0; i<5000;i++);
}
}
}
