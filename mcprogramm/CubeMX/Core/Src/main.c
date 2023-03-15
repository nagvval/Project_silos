/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
UART_HandleTypeDef huart1;

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_USART1_UART_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_USART1_UART_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief USART1 Initialization Function
  * @param None
  * @retval None
  */
static void MX_USART1_UART_Init(void)
{

  /* USER CODE BEGIN USART1_Init 0 */

  /* USER CODE END USART1_Init 0 */

  /* USER CODE BEGIN USART1_Init 1 */

  /* USER CODE END USART1_Init 1 */
  huart1.Instance = USART1;
  huart1.Init.BaudRate = 9600;
  huart1.Init.WordLength = UART_WORDLENGTH_8B;
  huart1.Init.StopBits = UART_STOPBITS_1;
  huart1.Init.Parity = UART_PARITY_NONE;
  huart1.Init.Mode = UART_MODE_TX_RX;
  huart1.Init.HwFlowCtl = UART_HWCONTROL_NONE;
  huart1.Init.OverSampling = UART_OVERSAMPLING_16;
  if (HAL_UART_Init(&huart1) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN USART1_Init 2 */

  /* USER CODE END USART1_Init 2 */

}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOE_CLK_ENABLE();
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOE, Lamp_M3_Pin|Lamp_M4_Pin|Lamp_M5_Pin|Lamp_M6_Pin
                          |Lamp_M7_Pin|Lamp_M8_Pin|Lamp_M9_Pin|Lamp_M10_Pin
                          |Lamp_M11_Pin|Lamp_M12_Pin|Lamp_M1_Pin|Lamp_M2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOD, Play_M6_Pin|Play_M7_Pin|Play_M8_Pin|Play_M9_Forvard_Pin
                          |Play_M9_Revers_Pin|Play_M10_Pin|Play_M11_Pin|Play_M12_Pin
                          |Lamp_STOP_Pin|Play_M1_Pin|Play_M2_Pin|Play_M3_Pin
                          |Play_M4_Pin|Play_M5_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : Lamp_M3_Pin Lamp_M4_Pin Lamp_M5_Pin Lamp_M6_Pin
                           Lamp_M7_Pin Lamp_M8_Pin Lamp_M9_Pin Lamp_M10_Pin
                           Lamp_M11_Pin Lamp_M12_Pin Lamp_M1_Pin Lamp_M2_Pin */
  GPIO_InitStruct.Pin = Lamp_M3_Pin|Lamp_M4_Pin|Lamp_M5_Pin|Lamp_M6_Pin
                          |Lamp_M7_Pin|Lamp_M8_Pin|Lamp_M9_Pin|Lamp_M10_Pin
                          |Lamp_M11_Pin|Lamp_M12_Pin|Lamp_M1_Pin|Lamp_M2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);

  /*Configure GPIO pins : Thermal_M11_Pin Thermal_M12_Pin Vibrator_Signal_Pin Boiler_level_High_Pin
                           Pillet_level_Low_Pin Pillet_level_High_Pin Thermal_M1_Pin Thermal_M2_Pin
                           Thermal_M3_Pin Thermal_M4_Pin Thermal_M5_Pin Thermal_M6_Pin
                           Thermal_M7_Pin Thermal_M8_Pin Thermal_M9_Pin Thermal_M10_Pin */
  GPIO_InitStruct.Pin = Thermal_M11_Pin|Thermal_M12_Pin|Vibrator_Signal_Pin|Boiler_level_High_Pin
                          |Pillet_level_Low_Pin|Pillet_level_High_Pin|Thermal_M1_Pin|Thermal_M2_Pin
                          |Thermal_M3_Pin|Thermal_M4_Pin|Thermal_M5_Pin|Thermal_M6_Pin
                          |Thermal_M7_Pin|Thermal_M8_Pin|Thermal_M9_Pin|Thermal_M10_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pins : Button_STOP_Pin Button_M1_Pin Button_M2_Pin Button_M3_Pin
                           Button_M4_Pin Button_M5_Pin Button_M6_Pin Button_M7_Pin
                           Button_M8_Pin */
  GPIO_InitStruct.Pin = Button_STOP_Pin|Button_M1_Pin|Button_M2_Pin|Button_M3_Pin
                          |Button_M4_Pin|Button_M5_Pin|Button_M6_Pin|Button_M7_Pin
                          |Button_M8_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : Button_M9_Forvard_Pin Button_M9_Reverse_Pin Button_M10__M11__M12_Pin Silos_level_1_Pin
                           Silos_level_2_Pin Silos_level_3_Pin Silos_level_4_Pin Silos_level_5_Pin
                           Boiler_level_Low_Pin SUM_M3_Pin SUM_M5_Pin SUM_M6_Pin
                           SUM_M7_Pin SUM_M8_Pin SUM_M9_Forvard_Pin SUM_M9_Revers_Pin */
  GPIO_InitStruct.Pin = Button_M9_Forvard_Pin|Button_M9_Reverse_Pin|Button_M10__M11__M12_Pin|Silos_level_1_Pin
                          |Silos_level_2_Pin|Silos_level_3_Pin|Silos_level_4_Pin|Silos_level_5_Pin
                          |Boiler_level_Low_Pin|SUM_M3_Pin|SUM_M5_Pin|SUM_M6_Pin
                          |SUM_M7_Pin|SUM_M8_Pin|SUM_M9_Forvard_Pin|SUM_M9_Revers_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pins : Auto_boiler_basic_Pin Auto_boiler_reserv_Pin Auto_pillet_basic_Pin Auto_pillet_reserv_Pin */
  GPIO_InitStruct.Pin = Auto_boiler_basic_Pin|Auto_boiler_reserv_Pin|Auto_pillet_basic_Pin|Auto_pillet_reserv_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);

  /*Configure GPIO pins : Play_M6_Pin Play_M7_Pin Play_M8_Pin Play_M9_Forvard_Pin
                           Play_M9_Revers_Pin Play_M10_Pin Play_M11_Pin Play_M12_Pin
                           Lamp_STOP_Pin Play_M1_Pin Play_M2_Pin Play_M3_Pin
                           Play_M4_Pin Play_M5_Pin */
  GPIO_InitStruct.Pin = Play_M6_Pin|Play_M7_Pin|Play_M8_Pin|Play_M9_Forvard_Pin
                          |Play_M9_Revers_Pin|Play_M10_Pin|Play_M11_Pin|Play_M12_Pin
                          |Lamp_STOP_Pin|Play_M1_Pin|Play_M2_Pin|Play_M3_Pin
                          |Play_M4_Pin|Play_M5_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

  /*Configure GPIO pins : Gotvald_Signal_swtch_M1_Pin Gotvald_signal_door_Pin */
  GPIO_InitStruct.Pin = Gotvald_Signal_swtch_M1_Pin|Gotvald_signal_door_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
