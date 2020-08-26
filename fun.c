#include "fun.h"
void rcgcenable(int x){
    RCGCPWM|=x;
}
//for 1KHz with 25%:: clock period=1/16MHZ=62.5ns//output period=1/1kHZ=1msec
void cmp (int x){   //(100%-25%)*load=duty cycle
    PWM0CMPA   =x;
}
void cnt (int x){
    PWM0COUNT  =x;
}
void load (int x){   //1/62.5nsec=16000
    PWM0LOAD =x;
}
void disable(void){
    int PWM0CTL&=~1;
}
void enable(void){
    int PWM0CTL|=1;
}
void mode(int x){
    int PWM0CTL|=x;
}
void generator (int x){
	PWMCTL|=x;
}
void pwm_enable (int x,int y){
	PWMENABLE|=x;
	PWMENABLE|=y;
}
