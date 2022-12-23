#include "mbed.h"

#define SW1 p5;
#define SW2 P6;

#define SWA p7;
#define SWB p8;
#define SWC p9;

#define RED_LED p10;
#define BLUE_LED p11;
#define YELLOW_LED p12;

DigitalOut ledR(RED_LED);
DigitalOut ledB(BLUE_LED);
DigitalOut ledY(YELLOW_LED);

DigitalIn b1(SWA);
DigitalIn b2(SWB);
DigitalIn b3(SWC);

DigitalIn sw1(SW1);
DigitalIn sw2(SW2);

void esperaPulsador1();
void esperaPulsador2();

int main() {
    while (1) {
        printf("Inicio!");
        esperaPulsador1();
        num1 = b1*4 + b2*2 + b3;
        esperaPulsador1();
        num2 = b1*4 + b2*2 + b3;
        esperaPulsador1();
        num3 = b1*4 + b2*2 + b3;
        int num[4];
        num[3]=num3;
        num[2]=num2;
        num[1]=num1;
        int i,j,a;
        for (i = 0; i < 3; i++) {
            for (j = i + 1; j < 3; j++) {
                if (num[i] > num[j]) {
                    a =  num[i];
                    num[i] = num[j];
                    num[j] = a;
                }
            }
        }
        
        esperaPulsador2();
        
        for (i=0; i<num1*2; i++){
            ledR=!ledR;
            wait_ms(500);
        }
        for (i=0; i<num2*2; i++){
            ledB=!ledB;
            wait_ms(500);
        }
        for (i=0; i<num3*2; i++){
            ledY=!ledY;
            wait_ms(500);
        }
    }
}

void esperaPulsador1() {
    int flag_Presiono;
    flag_Presiono = 0;
    while (!flag_Presiono){
        if(sw1 == 1){
           wait_ms(500);
           if (sw1 == 0){flag_Presiono=1;}
        }
    }
}

void esperaPulsador2() {
    int flag_Presiono;
    flag_Presiono = 0;
    while (!flag_Presiono){
        if(sw2 == 1){
           wait_ms(500);
           if (sw2 == 0){flag_Presiono=1;}
        }
    }
}