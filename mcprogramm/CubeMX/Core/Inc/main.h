/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define OLED OLED
#define Lamp_M3_Pin GPIO_PIN_2
#define Lamp_M3_GPIO_Port GPIOE
#define Lamp_M4_Pin GPIO_PIN_3
#define Lamp_M4_GPIO_Port GPIOE
#define Lamp_M5_Pin GPIO_PIN_4
#define Lamp_M5_GPIO_Port GPIOE
#define Lamp_M6_Pin GPIO_PIN_5
#define Lamp_M6_GPIO_Port GPIOE
#define Lamp_M7_Pin GPIO_PIN_6
#define Lamp_M7_GPIO_Port GPIOE
#define Thermal_M11_Pin GPIO_PIN_13
#define Thermal_M11_GPIO_Port GPIOC
#define Thermal_M12_Pin GPIO_PIN_14
#define Thermal_M12_GPIO_Port GPIOC
#define Vibrator_Signal_Pin GPIO_PIN_15
#define Vibrator_Signal_GPIO_Port GPIOC
#define Boiler_level_High_Pin GPIO_PIN_0
#define Boiler_level_High_GPIO_Port GPIOC
#define Pillet_level_Low_Pin GPIO_PIN_1
#define Pillet_level_Low_GPIO_Port GPIOC
#define Pillet_level_High_Pin GPIO_PIN_2
#define Pillet_level_High_GPIO_Port GPIOC
#define Thermal_M1_Pin GPIO_PIN_3
#define Thermal_M1_GPIO_Port GPIOC
#define Button_STOP_Pin GPIO_PIN_0
#define Button_STOP_GPIO_Port GPIOA
#define Button_M1_Pin GPIO_PIN_1
#define Button_M1_GPIO_Port GPIOA
#define Button_M2_Pin GPIO_PIN_2
#define Button_M2_GPIO_Port GPIOA
#define Button_M3_Pin GPIO_PIN_3
#define Button_M3_GPIO_Port GPIOA
#define Button_M4_Pin GPIO_PIN_4
#define Button_M4_GPIO_Port GPIOA
#define Button_M5_Pin GPIO_PIN_5
#define Button_M5_GPIO_Port GPIOA
#define Button_M6_Pin GPIO_PIN_6
#define Button_M6_GPIO_Port GPIOA
#define Button_M7_Pin GPIO_PIN_7
#define Button_M7_GPIO_Port GPIOA
#define Thermal_M2_Pin GPIO_PIN_4
#define Thermal_M2_GPIO_Port GPIOC
#define Thermal_M3_Pin GPIO_PIN_5
#define Thermal_M3_GPIO_Port GPIOC
#define Button_M9_Forvard_Pin GPIO_PIN_0
#define Button_M9_Forvard_GPIO_Port GPIOB
#define Button_M9_Reverse_Pin GPIO_PIN_1
#define Button_M9_Reverse_GPIO_Port GPIOB
#define Button_M10__M11__M12_Pin GPIO_PIN_2
#define Button_M10__M11__M12_GPIO_Port GPIOB
#define Lamp_M8_Pin GPIO_PIN_7
#define Lamp_M8_GPIO_Port GPIOE
#define Lamp_M9_Pin GPIO_PIN_8
#define Lamp_M9_GPIO_Port GPIOE
#define Lamp_M10_Pin GPIO_PIN_9
#define Lamp_M10_GPIO_Port GPIOE
#define Lamp_M11_Pin GPIO_PIN_10
#define Lamp_M11_GPIO_Port GPIOE
#define Lamp_M12_Pin GPIO_PIN_11
#define Lamp_M12_GPIO_Port GPIOE
#define Auto_boiler_basic_Pin GPIO_PIN_12
#define Auto_boiler_basic_GPIO_Port GPIOE
#define Auto_boiler_reserv_Pin GPIO_PIN_13
#define Auto_boiler_reserv_GPIO_Port GPIOE
#define Auto_pillet_basic_Pin GPIO_PIN_14
#define Auto_pillet_basic_GPIO_Port GPIOE
#define Auto_pillet_reserv_Pin GPIO_PIN_15
#define Auto_pillet_reserv_GPIO_Port GPIOE
#define Silos_level_1_Pin GPIO_PIN_10
#define Silos_level_1_GPIO_Port GPIOB
#define Silos_level_2_Pin GPIO_PIN_11
#define Silos_level_2_GPIO_Port GPIOB
#define Silos_level_3_Pin GPIO_PIN_12
#define Silos_level_3_GPIO_Port GPIOB
#define Silos_level_4_Pin GPIO_PIN_13
#define Silos_level_4_GPIO_Port GPIOB
#define Silos_level_5_Pin GPIO_PIN_14
#define Silos_level_5_GPIO_Port GPIOB
#define Boiler_level_Low_Pin GPIO_PIN_15
#define Boiler_level_Low_GPIO_Port GPIOB
#define Play_M6_Pin GPIO_PIN_8
#define Play_M6_GPIO_Port GPIOD
#define Play_M7_Pin GPIO_PIN_9
#define Play_M7_GPIO_Port GPIOD
#define Play_M8_Pin GPIO_PIN_10
#define Play_M8_GPIO_Port GPIOD
#define Play_M9_Forvard_Pin GPIO_PIN_11
#define Play_M9_Forvard_GPIO_Port GPIOD
#define Play_M9_Revers_Pin GPIO_PIN_12
#define Play_M9_Revers_GPIO_Port GPIOD
#define Play_M10_Pin GPIO_PIN_13
#define Play_M10_GPIO_Port GPIOD
#define Play_M11_Pin GPIO_PIN_14
#define Play_M11_GPIO_Port GPIOD
#define Play_M12_Pin GPIO_PIN_15
#define Play_M12_GPIO_Port GPIOD
#define Thermal_M4_Pin GPIO_PIN_6
#define Thermal_M4_GPIO_Port GPIOC
#define Thermal_M5_Pin GPIO_PIN_7
#define Thermal_M5_GPIO_Port GPIOC
#define Thermal_M6_Pin GPIO_PIN_8
#define Thermal_M6_GPIO_Port GPIOC
#define Thermal_M7_Pin GPIO_PIN_9
#define Thermal_M7_GPIO_Port GPIOC
#define Button_M8_Pin GPIO_PIN_15
#define Button_M8_GPIO_Port GPIOA
#define Thermal_M8_Pin GPIO_PIN_10
#define Thermal_M8_GPIO_Port GPIOC
#define Thermal_M9_Pin GPIO_PIN_11
#define Thermal_M9_GPIO_Port GPIOC
#define Thermal_M10_Pin GPIO_PIN_12
#define Thermal_M10_GPIO_Port GPIOC
#define Gotvald_Signal_swtch_M1_Pin GPIO_PIN_0
#define Gotvald_Signal_swtch_M1_GPIO_Port GPIOD
#define Gotvald_signal_door_Pin GPIO_PIN_1
#define Gotvald_signal_door_GPIO_Port GPIOD
#define Lamp_STOP_Pin GPIO_PIN_2
#define Lamp_STOP_GPIO_Port GPIOD
#define Play_M1_Pin GPIO_PIN_3
#define Play_M1_GPIO_Port GPIOD
#define Play_M2_Pin GPIO_PIN_4
#define Play_M2_GPIO_Port GPIOD
#define Play_M3_Pin GPIO_PIN_5
#define Play_M3_GPIO_Port GPIOD
#define Play_M4_Pin GPIO_PIN_6
#define Play_M4_GPIO_Port GPIOD
#define Play_M5_Pin GPIO_PIN_7
#define Play_M5_GPIO_Port GPIOD
#define SUM_M3_Pin GPIO_PIN_3
#define SUM_M3_GPIO_Port GPIOB
#define SUM_M5_Pin GPIO_PIN_4
#define SUM_M5_GPIO_Port GPIOB
#define SUM_M6_Pin GPIO_PIN_5
#define SUM_M6_GPIO_Port GPIOB
#define SUM_M7_Pin GPIO_PIN_6
#define SUM_M7_GPIO_Port GPIOB
#define SUM_M8_Pin GPIO_PIN_7
#define SUM_M8_GPIO_Port GPIOB
#define SUM_M9_Forvard_Pin GPIO_PIN_8
#define SUM_M9_Forvard_GPIO_Port GPIOB
#define SUM_M9_Revers_Pin GPIO_PIN_9
#define SUM_M9_Revers_GPIO_Port GPIOB
#define Lamp_M1_Pin GPIO_PIN_0
#define Lamp_M1_GPIO_Port GPIOE
#define Lamp_M2_Pin GPIO_PIN_1
#define Lamp_M2_GPIO_Port GPIOE
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
