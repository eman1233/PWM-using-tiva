#ifndef __FUN_H__
#define __FUN_H__
#define RCGCPWM    (*((unsigned int*)(0x400FE000+0x640)))
int PWM[]={0x40028000,0x40029000};
#define PWMCTL     (*((unsigned int*)(PWM+0x000)))
#define PWM0ENABLE  (*((unsigned int*)(PWM+0x008)))
#define PWM0CTL    (*((unsigned int*)(PWM+0x040)))
#define PWM0LOAD   (*((unsigned int*)(PWM+0x0x050)))
#define PWM0COUNT  (*((unsigned int*)(PWM+0x0x054)))
#define PWM0CMPA   (*((unsigned int*)(PWM+0x0x058)))
PWM0|=0X1;
PWM1|=0X2;
RCGCPWM|=(PWM0|PWM1);
int GLOBALSYNC0|=1;
int GLOBALSYNC1|=(1<<1u);
int GLOBALSYNC2|=(1<<2u);
int GLOBALSYNC3|=(1<<3u);
int PWM0EN|=1;
int PWM1EN|=(1<<1u);
int PWM2EN|=(1<<2u);
int PWM3EN|=(1<<3u);
int PWM4EN|=(1<<4u);
int PWM5EN|=(1<<5u);
int PWM6EN|=(1<<6u);
int PWM7EN|=(1<<7u);
int PWM0CTL|=1;
void rcgcenable(int x);
void cmp (int x);
void cnt (int x);
void load (int x);
void disable(void);
void enable(void);
void mode(int x);
void generator (int x);
void pwm_enable (int x,int y);
#endif
