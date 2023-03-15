//#include "Digital.h"

void main() {
//GPIO Init
//Port A IN
GPIO_Digital_Input(&GPIOA_BASE, 
                   _GPIO_PINMASK_0 |    //Button "STOP"
                   _GPIO_PINMASK_1 |    //Button M1
                   _GPIO_PINMASK_2 |    //Button M2
                   _GPIO_PINMASK_3 |    //Button M3
                   _GPIO_PINMASK_4 |    //Button M4
                   _GPIO_PINMASK_5 |    //Button M5
                   _GPIO_PINMASK_6 |    //Button M6
                   _GPIO_PINMASK_7 |    //Button M7
                   _GPIO_PINMASK_15);   //Button M8
//Port B IN
GPIO_Digital_Input(&GPIOB_BASE,
                   _GPIO_PINMASK_0 |    //Button M9 Forvard
                   _GPIO_PINMASK_1 |    //Button M9 Revers
                   _GPIO_PINMASK_2 |    //Button M10, M11, M12
                   _GPIO_PINMASK_3 |    //SUM M3
                   _GPIO_PINMASK_4 |    //SUM M5
                   _GPIO_PINMASK_5 |    //SUM M6
                   _GPIO_PINMASK_6 |    //SUM M7
                   _GPIO_PINMASK_7 |    //SUM M8
                   _GPIO_PINMASK_8 |    //SUM M9 Forvard
                   _GPIO_PINMASK_9 |    //SUM M9 Revers
                   _GPIO_PINMASK_10 |   //Silos level 1 (LOW)
                   _GPIO_PINMASK_11 |   //Silos level 2
                   _GPIO_PINMASK_12 |   //Silos level 3
                   _GPIO_PINMASK_13 |   //Silos level 4
                   _GPIO_PINMASK_14 |   //Silos level 5 (HIGH)
                   _GPIO_PINMASK_15);   //Boiler level LOW
//Port C IN
GPIO_Digital_Input(&GPIOC_BASE,
                   _GPIO_PINMASK_0 |    //Boiler level HIGH
                   _GPIO_PINMASK_1 |    //Pillet level LOW
                   _GPIO_PINMASK_2 |    //Pillet level HIGH
                   _GPIO_PINMASK_3 |    //Thermal M1
                   _GPIO_PINMASK_4 |    //Thermal M2
                   _GPIO_PINMASK_5 |    //Thermal M3
                   _GPIO_PINMASK_6 |    //Thermal M4
                   _GPIO_PINMASK_7 |    //Thermal M5
                   _GPIO_PINMASK_8 |    //Thermal M6
                   _GPIO_PINMASK_9 |    //Thermal M7
                   _GPIO_PINMASK_10 |   //Thermal M8
                   _GPIO_PINMASK_11 |   //Thermal M9
                   _GPIO_PINMASK_12 |   //Thermal M10
                   _GPIO_PINMASK_13 |   //Thermal M11
                   _GPIO_PINMASK_14 |   //Thermal M12
                   _GPIO_PINMASK_15);   //Vibrator signal
//Port D IN
GPIO_Digital_Input(&GPIOD_BASE,
                   _GPIO_PINMASK_0 |    //Gotvald Signal swtch M1
                   _GPIO_PINMASK_1 |    //Gotvald signal door
                   _GPIO_PINMASK_2 |    //Auto boiler basic
                   _GPIO_PINMASK_3 |    //Auto boiler reserv
                   _GPIO_PINMASK_4 |    //Auto pillet basic
                   _GPIO_PINMASK_5);    //Auto pillet reserv

//Port D OUT
GPIO_Digital_Output(&GPIOD_BASE, 
                   _GPIO_PINMASK_6 |    //Lamp "STOP"
                   _GPIO_PINMASK_7 |    //Play M1
                   _GPIO_PINMASK_8 |    //Play M2
                   _GPIO_PINMASK_9 |    //Play M3
                   _GPIO_PINMASK_10 |   //Play M4
                   _GPIO_PINMASK_11 |   //Play M5
                   _GPIO_PINMASK_12 |   //Play M6
                   _GPIO_PINMASK_13 |   //Play M7
                   _GPIO_PINMASK_14 |   //Play M8
                   _GPIO_PINMASK_15);   //Play M9 Forvard

//Port E OUT
GPIO_Digital_Output(&GPIOE_BASE,
                   _GPIO_PINMASK_0 |    //Play M9 Revers
                   _GPIO_PINMASK_1 |    //Play M10
                   _GPIO_PINMASK_2 |    //Play M11
                   _GPIO_PINMASK_3 |    //Play M12
                   _GPIO_PINMASK_4 |    //Lamp M1
                   _GPIO_PINMASK_5 |    //Lamp M2
                   _GPIO_PINMASK_6 |    //Lamp M3
                   _GPIO_PINMASK_7 |    //Lamp M4
                   _GPIO_PINMASK_8 |    //Lamp M5
                   _GPIO_PINMASK_9 |    //Lamp M6
                   _GPIO_PINMASK_10 |    //Lamp M7
                   _GPIO_PINMASK_11 |    //Lamp M8
                   _GPIO_PINMASK_12 |    //Lamp M9
                   _GPIO_PINMASK_13 |    //Lamp M10
                   _GPIO_PINMASK_14 |    //Lamp M11
                   _GPIO_PINMASK_15);    //Lamp M12

//UART Init
UART1_Init(9600);
Delay_ms(100);


while(1)
{
   GPIOD_ODR.B11 = 1;
   delay_ms(1000);
   GPIOD_ODR.B11 = 0;
   delay_ms(1000);
}

}