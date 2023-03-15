_main:
;MyProject.c,3 :: 		void main() {
;MyProject.c,15 :: 		_GPIO_PINMASK_15);   //Button M8
MOVW	R1, #33023
;MyProject.c,6 :: 		GPIO_Digital_Input(&GPIOA_BASE,
MOVW	R0, #lo_addr(GPIOA_BASE+0)
MOVT	R0, #hi_addr(GPIOA_BASE+0)
;MyProject.c,15 :: 		_GPIO_PINMASK_15);   //Button M8
BL	_GPIO_Digital_Input+0
;MyProject.c,33 :: 		_GPIO_PINMASK_15);   //Boiler level LOW
MOVW	R1, #65535
;MyProject.c,17 :: 		GPIO_Digital_Input(&GPIOB_BASE,
MOVW	R0, #lo_addr(GPIOB_BASE+0)
MOVT	R0, #hi_addr(GPIOB_BASE+0)
;MyProject.c,33 :: 		_GPIO_PINMASK_15);   //Boiler level LOW
BL	_GPIO_Digital_Input+0
;MyProject.c,51 :: 		_GPIO_PINMASK_15);   //Vibrator signal
MOVW	R1, #65535
;MyProject.c,35 :: 		GPIO_Digital_Input(&GPIOC_BASE,
MOVW	R0, #lo_addr(GPIOC_BASE+0)
MOVT	R0, #hi_addr(GPIOC_BASE+0)
;MyProject.c,51 :: 		_GPIO_PINMASK_15);   //Vibrator signal
BL	_GPIO_Digital_Input+0
;MyProject.c,59 :: 		_GPIO_PINMASK_5);    //Auto pillet reserv
MOVW	R1, #63
;MyProject.c,53 :: 		GPIO_Digital_Input(&GPIOD_BASE,
MOVW	R0, #lo_addr(GPIOD_BASE+0)
MOVT	R0, #hi_addr(GPIOD_BASE+0)
;MyProject.c,59 :: 		_GPIO_PINMASK_5);    //Auto pillet reserv
BL	_GPIO_Digital_Input+0
;MyProject.c,72 :: 		_GPIO_PINMASK_15);   //Play M9 Forvard
MOVW	R1, #65472
;MyProject.c,62 :: 		GPIO_Digital_Output(&GPIOD_BASE,
MOVW	R0, #lo_addr(GPIOD_BASE+0)
MOVT	R0, #hi_addr(GPIOD_BASE+0)
;MyProject.c,72 :: 		_GPIO_PINMASK_15);   //Play M9 Forvard
BL	_GPIO_Digital_Output+0
;MyProject.c,91 :: 		_GPIO_PINMASK_15);    //Lamp M12
MOVW	R1, #65535
;MyProject.c,75 :: 		GPIO_Digital_Output(&GPIOE_BASE,
MOVW	R0, #lo_addr(GPIOE_BASE+0)
MOVT	R0, #hi_addr(GPIOE_BASE+0)
;MyProject.c,91 :: 		_GPIO_PINMASK_15);    //Lamp M12
BL	_GPIO_Digital_Output+0
;MyProject.c,94 :: 		UART1_Init(9600);
MOVW	R0, #9600
BL	_UART1_Init+0
;MyProject.c,95 :: 		Delay_ms(100);
MOVW	R7, #4521
MOVT	R7, #4
NOP
NOP
L_main0:
SUBS	R7, R7, #1
BNE	L_main0
NOP
NOP
;MyProject.c,98 :: 		while(1)
L_main2:
;MyProject.c,102 :: 		}
IT	AL
BAL	L_main2
;MyProject.c,104 :: 		}
L_end_main:
L__main_end_loop:
B	L__main_end_loop
; end of _main
