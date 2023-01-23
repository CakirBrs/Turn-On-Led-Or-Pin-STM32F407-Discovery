/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */


#include <stdint.h>
#include "stm32f407xx.h"
#include "gpio.h"

int main(void)
{
	//Definition of blue led pin
	GPIO_Handle_t Gpio_pd_blue={GPIOD,{GPIO_PIN_BLUE,GPIO_MODE_OUT,GPIO_SPEED_MEDIUM,GPIO_OTYPE_PP,GPIO_NO_PUPD}};

	// Initialization of blue led pin
	gpio_init(&Gpio_pd_blue);

	//Enable blue led pin
	gpio_writeto_output_pin(GPIOD , GPIO_PIN_BLUE, GPIO_PIN_SET);

    while(1){

    }
}
