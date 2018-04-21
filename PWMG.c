#include "PWMG.h"
#include "HW_gpio.h"
#include "data_types.h"
#include "HW_PWMGEN.h"




void PWMGEN_SETUP(void){
	volatile U16_t delay=0;
	//Enable PWM clock.
	RCGCPWM|=PWM_Module1_Enable;
	//Enable GPIOF clock.
	RCGC2F|=GPIOF_Enable;
	delay=RCGC2F;
	//select Alternat function for PF1-Digital enable-Direction.
	GPIO_PORTF_lock=0x4C4F434B;
	GPIO_PORTF_CR=0x02;
	GPIO_PORTF_AFSEL|=0x02;
	GPIO_PORTF_DEN|=0x02;
	GPIO_PORTF_DIR|=0x02;
	//select PWMGEN=M1PWM5
	GPIO_PORTF_PCTRL=0x00000050;
	//Enable divisor for pwm =16
	RCC|=USEPWMDIV_Enable;
	RCC|=((1<<19)|(1<<18)|(1<<17));
	
	//setup PWM reg.320000-1 load
	PWM2CTL=0;
	PWM2GENB=0x00000C02;
	PWM2LOAD=(20000);//50hz=20msec/  -90=0,+90=300,180=600
	PWM2CMPB=0;
	PWM2CTL=0x01;
	PWMENABLE=(1<<5);
	
}



void PWMGEN_DUTY(U32_t duty){
	
		PWM2CMPB=duty;	
}


