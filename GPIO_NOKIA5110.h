#ifndef GPIO_NOKIA5110_H__
#define GPIO_NOKIA5110_H__

typedef enum instruction{
 DATA=0,
 COMMAND=1,	
 HIGH=2,
 LOW=3,	
}Const_m;

void NOKIA_GPIOE_Setup(void);

void NOKIA_REST(Const_m value);

void NOKIA_DC(Const_m data_CMD);

#endif //GPIO_NOKIA5110_H__

