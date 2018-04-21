#ifndef __ADC_H__
#define __ADC_H__
#include "data_types.h"
/****************************
  date: 16/9/2017           *
  Author: Elsafi Khaled     *
  Processor: TM4C123G6HPM   *
****************************/

//! Enum 
typedef enum Trig{
	GPIO=1,
	SW=2,
	TIMER=3,	
}TrigADC_m;


//! Function prototypes

//ADC Setupt function.
/** 
channel 4 == PIN PD3 
channel 5 == PIN PD2
channel 6 == PIN PD1
channel 7 == PIN PD0
**/
void ADC0_SS3_Init(U8_t channel,U8_t pin,TrigADC_m tri);

//ADC Interrupt Setup.
void ADC0_Interrupt(void);

//ADC Reading:Digital value.
U32_t ADC0_SS3_Read(void); 





#endif //__ADC_H__



