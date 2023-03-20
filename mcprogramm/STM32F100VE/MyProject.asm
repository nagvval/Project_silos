_main:
;MyProject.c,3 :: 		void main() {
;MyProject.c,104 :: 		_GPIO_PINMASK_15);   //Play M9 Forvard
MOVW	R1, #65472
;MyProject.c,94 :: 		GPIO_Digital_Output(&GPIOD_BASE,
MOVW	R0, #lo_addr(GPIOD_BASE+0)
MOVT	R0, #hi_addr(GPIOD_BASE+0)
;MyProject.c,104 :: 		_GPIO_PINMASK_15);   //Play M9 Forvard
BL	_GPIO_Digital_Output+0
;MyProject.c,115 :: 		_GPIO_PINMASK_15);   //Button M8
MOVW	R1, #33023
;MyProject.c,106 :: 		GPIO_Digital_Input(&GPIOE_BASE,
MOVW	R0, #lo_addr(GPIOE_BASE+0)
MOVT	R0, #hi_addr(GPIOE_BASE+0)
;MyProject.c,115 :: 		_GPIO_PINMASK_15);   //Button M8
BL	_GPIO_Digital_Input+0
;MyProject.c,118 :: 		UART1_Init(9600);
MOVW	R0, #9600
BL	_UART1_Init+0
;MyProject.c,119 :: 		Delay_ms(100);
MOVW	R7, #4521
MOVT	R7, #4
NOP
NOP
L_main0:
SUBS	R7, R7, #1
BNE	L_main0
NOP
NOP
;MyProject.c,122 :: 		while(1)
L_main2:
;MyProject.c,130 :: 		}
L_main4:
;MyProject.c,132 :: 		}
IT	AL
BAL	L_main2
;MyProject.c,134 :: 		}
L_end_main:
L__main_end_loop:
B	L__main_end_loop
; end of _main
