/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/


#include "stm32f3xx.h"
#include "stm32f3348_discovery.h"

#define SER		GPIO_PIN_0
#define RCLK	GPIO_PIN_1
#define SRCLK	GPIO_PIN_2

#define DELAY	10

unsigned char test = 0xF0;


void Initializegpio()
{
	HAL_Init();
    __HAL_RCC_GPIOA_CLK_ENABLE();
    __HAL_RCC_GPIOB_CLK_ENABLE();

    GPIO_InitTypeDef GPIO_InitStructure0;
    GPIO_InitStructure0.Pin = SER | RCLK | SRCLK;
    GPIO_InitStructure0.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStructure0.Speed = GPIO_SPEED_HIGH;
    GPIO_InitStructure0.Pull = GPIO_NOPULL;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStructure0);

    GPIO_InitTypeDef GPIO_InitStructure1;
    GPIO_InitStructure1.Pin = GPIO_PIN_All;
    GPIO_InitStructure1.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStructure1.Speed = GPIO_SPEED_HIGH;
    GPIO_InitStructure1.Pull = GPIO_NOPULL;
    HAL_GPIO_Init(GPIOB, &GPIO_InitStructure1);

    HAL_GPIO_WritePin(GPIOA, RCLK, GPIO_PIN_SET);

}

int main(void)
{
	Initializegpio();
	/*HAL_GPIO_WritePin(GPIOB, SRCLK, GPIO_PIN_SET);
	test++;
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, GPIO_PIN_SET);
	test++;
	HAL_GPIO_WritePin(GPIOB, SRCLK, GPIO_PIN_RESET);
	test++;
	HAL_GPIO_TogglePin(GPIOB,SRCLK);
	test++;
	HAL_GPIO_TogglePin(GPIOB,SRCLK);
	test++;
	HAL_GPIO_WritePin(GPIOB, SRCLK, GPIO_PIN_RESET);
	test++;
*/
	for(;;) {
     // test++;
      Multiplex(test);
      HAL_Delay(1000);
	}
	HAL_DeInit();
}

void Multiplex(/*uint8_t*/ unsigned char value) {
	for (int i = 0; i < 8; ++i) {
		HAL_GPIO_WritePin(GPIOA, SRCLK, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, RCLK, GPIO_PIN_RESET);
		HAL_Delay(DELAY);

		HAL_GPIO_WritePin(GPIOA, SER, (value & 0x1) ? GPIO_PIN_SET : GPIO_PIN_RESET);
		HAL_Delay(DELAY);
		HAL_GPIO_WritePin(GPIOA, SRCLK, GPIO_PIN_SET);
		HAL_Delay(DELAY);
		HAL_GPIO_WritePin(GPIOA, RCLK, GPIO_PIN_SET);
		HAL_Delay(DELAY);

		value >>= 1;
	}
	HAL_GPIO_WritePin(GPIOA, RCLK, GPIO_PIN_SET);
}
