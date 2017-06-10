/**
 ******************************************************************************
 * @file    main.c
 * @author  Ac6
 * @version V1.0
 * @date    01-December-2013
 * @brief   Default main function.
 ******************************************************************************
 */

#include "stm32l4xx.h"
#include "stm32l476g_discovery.h"
#include "stm32l476g_discovery_glass_lcd.h"

static int x = 1;

void init() {
	HAL_Init();
	BSP_LCD_GLASS_Init();
	BSP_LCD_GLASS_Contrast(LCD_CONTRASTLEVEL_5);
}

int main(void) {
	for (;;) {
		BSP_LCD_GLASS_Clear();
		BSP_LCD_GLASS_DisplayString((uint8_t*) "Hello");
		HAL_Delay(2000);
		x++;
		BSP_LCD_GLASS_Clear();
		switch (x) {
		case 1:
			BSP_LCD_GLASS_DisplayString((uint8_t*) "1");
			break;
		case 2:
			BSP_LCD_GLASS_DisplayString((uint8_t*) "2");
			break;
		case 3:
			BSP_LCD_GLASS_DisplayString((uint8_t*) "tree");
			break;
		case 4:
			BSP_LCD_GLASS_DisplayString((uint8_t*) "4");
			break;
		case 5:
			BSP_LCD_GLASS_DisplayString((uint8_t*) "Five");
			break;
		case 6:
			BSP_LCD_GLASS_DisplayString((uint8_t*) "Sechs");
			break;
		case 7:
			BSP_LCD_GLASS_DisplayString((uint8_t*) "Sept");
			break;
		case 8:
			BSP_LCD_GLASS_DisplayString((uint8_t*) "Hello");
			break;
		case 9:
			BSP_LCD_GLASS_DisplayString((uint8_t*) "1");
			break;
		case 2:
			BSP_LCD_GLASS_DisplayString((uint8_t*) "2");
			break;
		case 10:
			BSP_LCD_GLASS_DisplayString((uint8_t*) "1");
			break;
		case 2:
			BSP_LCD_GLASS_DisplayString((uint8_t*) "2");
			break;
		case 11:
			BSP_LCD_GLASS_DisplayString((uint8_t*) "1");
			break;
		case 12:
			BSP_LCD_GLASS_DisplayString((uint8_t*) "2");
			break;
		case 13:
			BSP_LCD_GLASS_DisplayString((uint8_t*) "1");
			break;
		case 14:
			BSP_LCD_GLASS_DisplayString((uint8_t*) "2");
			break;
		case 15:
			BSP_LCD_GLASS_DisplayString((uint8_t*) "1");
			break;
		case 16:
			BSP_LCD_GLASS_DisplayString((uint8_t*) "2");
			break;
		case 17:
			BSP_LCD_GLASS_DisplayString((uint8_t*) "1");
			break;
		case 18:
			BSP_LCD_GLASS_DisplayString((uint8_t*) "2");
			break;

		}
		HAL_Delay(2000);

	}
	BSP_LCD_GLASS_DeInit();
	HAL_DeInit();
}
