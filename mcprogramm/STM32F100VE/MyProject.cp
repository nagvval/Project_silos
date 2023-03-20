#line 1 "D:/job/Project_silos/mcprogramm/STM32F100VE/MyProject.c"


void main() {
#line 94 "D:/job/Project_silos/mcprogramm/STM32F100VE/MyProject.c"
GPIO_Digital_Output(&GPIOD_BASE,
 _GPIO_PINMASK_6 |
 _GPIO_PINMASK_7 |
 _GPIO_PINMASK_8 |
 _GPIO_PINMASK_9 |
 _GPIO_PINMASK_10 |
 _GPIO_PINMASK_11 |
 _GPIO_PINMASK_12 |
 _GPIO_PINMASK_13 |
 _GPIO_PINMASK_14 |
 _GPIO_PINMASK_15);

GPIO_Digital_Input(&GPIOE_BASE,
 _GPIO_PINMASK_0 |
 _GPIO_PINMASK_1 |
 _GPIO_PINMASK_2 |
 _GPIO_PINMASK_3 |
 _GPIO_PINMASK_4 |
 _GPIO_PINMASK_5 |
 _GPIO_PINMASK_6 |
 _GPIO_PINMASK_7 |
 _GPIO_PINMASK_15);


UART1_Init(9600);
Delay_ms(100);


while(1)
{
 if (GPIOE_IDR.B2, 0,1,0)
 {
 GPIOD_ODR.B11 = 1;
 }
 if (GPIOE_IDR.B2, 0,1,1)
 {
 GPIOD_ODR.B11 = 0;
 }

}

}
