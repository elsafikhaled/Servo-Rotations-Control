#ifndef __GPIO_SPI_H__
#define __GPIO_SPI_H__
#include "data_types.h"

//! Mode select master or servant "slave".

typedef enum spi_mode{
	MASTER=1,
	SLAVE=2,
}SpiSelect_m;


//Master function. for SPI0 mapped to PORTA and configure pins for master and slave mode.
void GPIO_Spi0(SpiSelect_m mode);

//Pull system down to choose slave
void GPIO_SPI_SS_LOW(void);


//let system high to choose IDL
void GPIO_SPI_SS_IDL(void);






#endif //__GPIO_SPI_H__

