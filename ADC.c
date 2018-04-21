#include "ADC.h"
#include "SysCtrl.h"
#include "GPIO_ADC.h"
#include "HW_ADC.h"



//ADC Setupt function.
void ADC0_SS3_Init(U8_t channel,U8_t pin,TrigADC_m tri){
//Enable clocl for PORTD.
	clock_Enable_PORT(Clock_PortD);	
//GPIO init.	
	GPIO_PortD_ADC(pin);
//Enable ADC clock.
  Clock_Enable_ADC(ADC0);	
//!Register setup.
//disable ADC.
  GPIO_PortD_ADC_Dis();
//!Sample Sequencer (3) Configuration.
//disable sample sequencer.
	ADCACTSS&=~(1<<3);       
	switch(tri){
		case SW:    //Always continuously sample by SW.
		            ADCEMUX&=~(0xF000);break;      
		case GPIO:  //GPIO as switch button.
                ADCEMUX=(0x4000);break; 
    case TIMER: //ADC trigered by timer.
                ADCEMUX=(0x5000);break;
		default:
		        break;        		
	}//!End of switch.
//configure input pin by multiblxer	
  ADCSSMUX3=channel;            
//control register only one sample and raw interrupt.
  ADCSSCTL3|=6;	
//Enable sample sequencer.
	ADCACTSS|=(1<<3);
//Enable ADC in GPIO register.	
  GPIO_PortD_ADC_EN(pin); 
	
}//! End of ADC setup Function.

//------------------------------------------------------------------------------

U32_t ADC0_SS3_Read(void){
	U32_t digital=0;
//start conversion.
	ADCPSSI|=(1<<3);
//polling on Interrupt status flag.
	while(!(ADCRIS&(1<<3)));
//get digital value.
	digital=ADCSSFIFO3;
//clear Interrupt status flag.
	ADCISC=0x8;
//return value.
	return digital;
}//! End of reading digital function.

//-----------------------------------------------------------------------------

