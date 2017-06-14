/**
 ******************************************************************************
 * @file    main.c
 * @author  Ac6
 * @version V1.0
 * @date    01-December-2013
 * @brief   Default main function.
 ******************************************************************************
 */

#include "main.h"

unsigned char test = 0;
char num = 0;

unsigned char a[SIZE_LINE_OF_MATRIX];
unsigned char b[SIZE_LINE_OF_MATRIX];
unsigned char c[SIZE_LINE_OF_MATRIX];
unsigned char d[SIZE_LINE_OF_MATRIX];
unsigned char m[SIZE_LINE_OF_MATRIX];

void Initializegpio() {
	HAL_Init();
	__HAL_RCC_GPIOA_CLK_ENABLE()
	;
	__HAL_RCC_GPIOB_CLK_ENABLE()
	;

	GPIO_InitTypeDef GPIO_InitStructure0;
	GPIO_InitStructure0.Pin = SER | RCLK | SRCLK | OE;
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

int main(void) {
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
	for (;;) {
		// test++;

		a[0] = 1;
		b[1] = 1;
		c[2] = 1;
		d[3] = 1;
		Matrix();
	}
	HAL_DeInit();
}

void Matrix(void) {
	test = 0;
	for (char i = 0; i < 4; i++) {
		switch (i) {
		case 0:
			m[0] = a[0];
			m[1] = a[1];
			m[2] = a[2];
			m[3] = a[3];
			test = (test | (1 << 0));
			break;
		case 1:
			m[0] = b[0];
			m[1] = b[1];
			m[2] = b[2];
			m[3] = b[3];
			test = (test | (1 << 1));
			break;
		case 2:
			m[0] = c[0];
			m[1] = c[1];
			m[2] = c[2];
			m[3] = c[3];
			test = (test | (1 << 2));
			break;
		case 3:
			m[0] = d[0];
			m[1] = d[1];
			m[2] = d[2];
			m[3] = d[3];
			test = (test | (1 << 3));
			break;
		}

		for (int o = 0; o < 4; o++) {
			if (m[o] == 1) {
				test = (test | (1 << (o + 4)));
			}
		}
		Multiplex(test);
		test = 0;
	}
}

void Multiplex(/*uint8_t*/unsigned char value) {
	HAL_GPIO_WritePin(GPIOA, OE, GPIO_PIN_SET);
	for (int w = 0; w < 8; ++w) {
		HAL_GPIO_WritePin(GPIOA, SRCLK, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, RCLK, GPIO_PIN_RESET);
		HAL_Delay(DELAY);

		HAL_GPIO_WritePin(GPIOA, SER,
				(value & 0x1) ? GPIO_PIN_SET : GPIO_PIN_RESET);
		HAL_Delay(DELAY);
		HAL_GPIO_WritePin(GPIOA, SRCLK, GPIO_PIN_SET);
		HAL_Delay(DELAY);
		HAL_GPIO_WritePin(GPIOA, RCLK, GPIO_PIN_SET);
		HAL_Delay(DELAY);

		value >>= 1;
	}
	HAL_GPIO_WritePin(GPIOA, RCLK, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, OE, GPIO_PIN_RESET);
}
