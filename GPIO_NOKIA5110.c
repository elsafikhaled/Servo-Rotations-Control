#include "GPIO_NOKIA5110.h"
#include "HW_gpio.h"
#include "SysCtrl.h"

/* ************************************************************************ */
void NOKIA_GPIOE_Setup(void){//! start function.
	//enable clock for PORTF
	clock_Enable_PORT(Clock_PortE);
	//Select alternating Function for GPIO.
	GPIO_PORTE_AFSEL=0x00;
	//Enable digital function for PORTE pins
	GPIO_PORTE_DEN|=(1<<5)|(1<<4);
	//Turn off Analog function
  GPIO_PORTE_AMSEL=0x00;
	//set PE4/PE5 AS OUTPUT
	GPIO_PORTE_DIR|=(1<<5)|(1<<4);
}//! end of GPIO function.

/* *********************************************************************** */
void NOKIA_REST(Const_m value){//!start reset function.
	
	switch(value){//start switch cases.
		case HIGH:
			GPIO_PORTE_DATA|=(1<<4);break;
		case LOW:
			GPIO_PORTE_DATA&=~(1<<4);break;
	}//end of switch
	
	
}//! end of reset function.

/* *********************************************************************** */

void NOKIA_DC(Const_m data_CMD){//1 start DC function.
	
	switch(data_CMD){//start switch cases.
		case DATA:
			GPIO_PORTE_DATA|=(1<<5);break;
		case COMMAND:
			GPIO_PORTE_DATA&=~(1<<5);break;
	}//end of switch


}//! end of DC function.




