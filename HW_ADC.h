#ifndef __HW_ADC_H__
#define __HW_ADC_H__
#include "data_types.h"


//  HW file for ADC RAL.

//! Register bases for ADC0 and ADC1.

#define  ADC0_BASE    0x40038000
#define  ADC1_BASE    0x40039000

//! Register addresses.

#define   ADCACTSS          *((volatile U32_t*)0x40038000)
#define   ADCRIS            *((volatile U32_t*)0x40038004)
#define   ADCIM             *((volatile U32_t*)0x40038008)
#define   ADCISC            *((volatile U32_t*)0x4003800c)
#define   ADCOSTAT          *((volatile U32_t*)0x40038010)
#define   ADCEMUX           *((volatile U32_t*)0x40038014)
#define   ADCUSTAT          *((volatile U32_t*)0x40038018)
#define   ADCTSSEL          *((volatile U32_t*)0x4003801c)
#define   ADCSSPRI          *((volatile U32_t*)0x40038020)
#define   ADCSPC            *((volatile U32_t*)0x40038024)
#define   ADCPSSI           *((volatile U32_t*)0x40038028)
#define   ADCSAC            *((volatile U32_t*)0x40038030)
#define   ADCDCISC          *((volatile U32_t*)0x40038034)
#define   ADCCTL            *((volatile U32_t*)0x40038038)
#define   ADCSSMUX0         *((volatile U32_t*)0x40038040)
#define   ADCSSCTL0         *((volatile U32_t*)0x40038044)
#define   ADCSSFIFO0        *((volatile U32_t*)0x40038048)
#define   ADCSSFSTAT0       *((volatile U32_t*)0x4003804c)
#define   ADCSSOP0          *((volatile U32_t*)0x40038050)
#define   ADCSSDC0          *((volatile U32_t*)0x40038054)
#define   ADCSSMUX1         *((volatile U32_t*)0x40038060)
#define   ADCSSCTL1         *((volatile U32_t*)0x40038064)
#define   ADCSSFIFO1        *((volatile U32_t*)0x40038068)
#define   ADCSSFSTAT1       *((volatile U32_t*)0x4003806c)
#define   ADCSSOP1          *((volatile U32_t*)0x40038070)
#define   ADCSSDC1          *((volatile U32_t*)0x40038074)
#define   ADCSSMUX2         *((volatile U32_t*)0x40038080)
#define   ADCSSCTL2         *((volatile U32_t*)0x40038084)
#define   ADCSSFIFO2        *((volatile U32_t*)0x40038088)
#define   ADCSSFSTAT2       *((volatile U32_t*)0x4003808c)
#define   ADCSSOP2          *((volatile U32_t*)0x40038090)
#define   ADCSSDC2          *((volatile U32_t*)0x40038094)
#define   ADCSSMUX3         *((volatile U32_t*)0x400380A0)
#define   ADCSSCTL3         *((volatile U32_t*)0x400380A4)
#define   ADCSSFIFO3        *((volatile U32_t*)0x400380A8)
#define   ADCSSFSTAT3       *((volatile U32_t*)0x400380AC)
#define   ADCSSOP3          *((volatile U32_t*)0x400380B0)
#define   ADCSSDC3          *((volatile U32_t*)0x400380B4)
#define   ADCPP             *((volatile U32_t*)0x40038FC0)
#define   ADCPC             *((volatile U32_t*)0x40038FC4)
#define   ADCCC             *((volatile U32_t*)0x40038FC8)





#endif //__HW_ADC_H__


