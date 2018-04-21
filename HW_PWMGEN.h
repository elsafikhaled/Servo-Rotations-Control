#ifndef __HW_PWMGEN_H__
#define __HW_PWMGEN_H__



 /*    << System control registers for clocking PWM.>>
 
Pulse Width Modulator Run Mode Clock Gating Control (RCGCPWM)
Base 0x400F.E000
Offset 0x640
Type R/W, reset 0x0000.0000 */

#define RCGCPWM             (*((volatile U32_t*)(0x400FE640)))
#define PWM_Module1_Enable  0x00000002

/* << Run Mode Clock Gating Control Register 2 (RCGC2)>>
Base 0x400F.E000
Offset 0x108
Type RO, reset 0x0000.0000 */

#define RCGC2F             (*((volatile U32_t*)(0x400FE108)))
#define GPIOF_Enable        0x00000020

/* <<Run-Mode Clock Configuration (RCC)>>
Base 0x400F.E000
Offset 0x060
Type R/W, reset 0x078E.3AD1 */
#define RCC                     (*((volatile U32_t*)(0x400FE060)))
#define USEPWMDIV_Enable        (1<<20)



#define PWM0_base  0x40028000
#define PWM1_base  0x40029000

#define PWMCTL    (*((volatile U32_t*)(0x40029000)))
#define PWM2GENB  (*((volatile U32_t*)(0x400290e4)))
#define PWM2LOAD  (*((volatile U32_t*)(0x400290d0)))	
#define PWM2CMPB  (*((volatile U32_t*)(0x400290dc)))
#define PWM2CTL   (*((volatile U32_t*)(0x400290c0)))
#define PWMENABLE (*((volatile U32_t*)(0x40029008)))























#endif





