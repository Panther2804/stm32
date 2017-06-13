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
	/*	BSP_LCD_GLASS_Clear();
		BSP_LCD_GLASS_DisplayStrDeci(x);
		HAL_Delay(500);
*/
	}
	BSP_LCD_GLASS_DeInit();
	HAL_DeInit();
}
