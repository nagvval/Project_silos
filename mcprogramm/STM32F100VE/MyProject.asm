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
;MyProject.c,124 :: 		if (Button(&GPIOA_IDR, 0, 1, 1))
MOVS	R3, #1
MOVS	R2, #1
MOVS	R1, #0
MOVW	R0, #lo_addr(GPIOA_IDR+0)
MOVT	R0, #hi_addr(GPIOA_IDR+0)
BL	_Button+0
CMP	R0, #0
IT	EQ
BEQ	L_main4
;MyProject.c,126 :: 		GPIOD_ODR.B11 = 1;
MOVS	R1, #1
SXTB	R1, R1
MOVW	R0, #lo_addr(GPIOD_ODR+0)
MOVT	R0, #hi_addr(GPIOD_ODR+0)
_SX	[R0, ByteOffset(GPIOD_ODR+0)]
;MyProject.c,127 :: 		}
L_main4:
;MyProject.c,128 :: 		if (Button(&GPIOA_IDR, 0, 1, 0))
MOVS	R3, #0
MOVS	R2, #1
MOVS	R1, #0
MOVW	R0, #lo_addr(GPIOA_IDR+0)
MOVT	R0, #hi_addr(GPIOA_IDR+0)
BL	_Button+0
CMP	R0, #0
IT	EQ
BEQ	L_main5
;MyProject.c,130 :: 		GPIOD_ODR.B11 = 0;
MOVS	R1, #0
SXTB	R1, R1
MOVW	R0, #lo_addr(GPIOD_ODR+0)
MOVT	R0, #hi_addr(GPIOD_ODR+0)
_SX	[R0, ByteOffset(GPIOD_ODR+0)]
;MyProject.c,131 :: 		}
L_main5:
;MyProject.c,133 :: 		}
IT	AL
BAL	L_main2
;MyProject.c,135 :: 		}
L_end_main:
L__main_end_loop:
B	L__main_end_loop
; end of _main
