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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define CC1_ADC_Pin GPIO_PIN_0
#define CC1_ADC_GPIO_Port GPIOA
#define CC2_ADC_Pin GPIO_PIN_1
#define CC2_ADC_GPIO_Port GPIOA
#define CON_DET__Pin GPIO_PIN_2
#define CON_DET__GPIO_Port GPIOA
#define CON_DET_A3_Pin GPIO_PIN_3
#define CON_DET_A3_GPIO_Port GPIOA
#define STM_CHL_DAC_Pin GPIO_PIN_4
#define STM_CHL_DAC_GPIO_Port GPIOA
#define STM_CHR_DAC_Pin GPIO_PIN_5
#define STM_CHR_DAC_GPIO_Port GPIOA
#define STM_JACKR_ADC_Pin GPIO_PIN_6
#define STM_JACKR_ADC_GPIO_Port GPIOA
#define STM_JACKL_ADC_Pin GPIO_PIN_7
#define STM_JACKL_ADC_GPIO_Port GPIOA
#define CODEC_WS_Pin GPIO_PIN_12
#define CODEC_WS_GPIO_Port GPIOB
#define CODEC_CK_Pin GPIO_PIN_13
#define CODEC_CK_GPIO_Port GPIOB
#define CODEC_SD_Pin GPIO_PIN_15
#define CODEC_SD_GPIO_Port GPIOB
#define CON_SIG__Pin GPIO_PIN_6
#define CON_SIG__GPIO_Port GPIOC
#define CON_SIG_C7_Pin GPIO_PIN_7
#define CON_SIG_C7_GPIO_Port GPIOC
#define DEBUG_TXD_Pin GPIO_PIN_9
#define DEBUG_TXD_GPIO_Port GPIOA
#define DEBUG_RXD_Pin GPIO_PIN_10
#define DEBUG_RXD_GPIO_Port GPIOA
#define HBR_PWM_A_Pin GPIO_PIN_15
#define HBR_PWM_A_GPIO_Port GPIOA
#define HBR_PWM_B_Pin GPIO_PIN_3
#define HBR_PWM_B_GPIO_Port GPIOB
#define CHGPMP_PWM_Pin GPIO_PIN_6
#define CHGPMP_PWM_GPIO_Port GPIOB
#define OLED_SCL_Pin GPIO_PIN_8
#define OLED_SCL_GPIO_Port GPIOB
#define OLED_SDA_Pin GPIO_PIN_9
#define OLED_SDA_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
