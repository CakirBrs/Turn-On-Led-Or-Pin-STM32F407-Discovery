/*
 * gpio.h
 *
 *  Created on: 2 Ara 2022
 *      Author: metab
 */

#ifndef GPIO_H_
#define GPIO_H_
#include <stdint.h>
#include "stm32f407xx.h"


#define PUBLIC
#define PRIVATE		static


typedef struct{
	uint8_t 	pin_number;
	uint8_t 	pin_mode;
	uint8_t 	pin_speed;
	uint8_t 	pin_otype;
	uint8_t 	pin_pupd;
	uint8_t		pin_alternate_function_mode;

}GPIO_PinConfig_t;


typedef struct{
	GPIO_RegDef_t * pGpioX;
	GPIO_PinConfig_t gPIO_pinConfig;
}GPIO_Handle_t; //Definition of Port


//GPIO MODES
enum{
	GPIO_MODE_IN,
	GPIO_MODE_OUT,
	GPIO_MODE_ALTERNATE,
	GPIO_MODE_ANALOG
};

enum{
	GPIO_PIN_NO_0,
	GPIO_PIN_NO_1,
	GPIO_PIN_NO_2,
	GPIO_PIN_NO_3,
	GPIO_PIN_NO_4,
	GPIO_PIN_NO_5,
	GPIO_PIN_NO_6,
	GPIO_PIN_NO_7,
	GPIO_PIN_NO_8,
	GPIO_PIN_NO_9,
	GPIO_PIN_NO_10,
	GPIO_PIN_NO_11,
	GPIO_PIN_NO_12,
	GPIO_PIN_NO_13,
	GPIO_PIN_NO_14,
	GPIO_PIN_NO_15
};

enum{
	GPIO_PIN_GREEN=12,
	GPIO_PIN_ORANGE,
	GPIO_PIN_RED,
	GPIO_PIN_BLUE
};

enum{
	GPIO_SPEED_LOW,
	GPIO_SPEED_MEDIUM,
	GPIO_SPEED_HIGH,
	GPIO_SPEED_VERY_HIGH
};

enum{
	GPIO_OTYPE_PP,
	GPIO_OTYPE_OD
};

enum{
	GPIO_NO_PUPD,
	GPIO_PIN_PU,
	GPIO_PIN_PD
};

enum{
	GPIO_PIN_RESET,
	GPIO_PIN_SET
};


void gpio_init(GPIO_Handle_t * pGpio_handle);

void gpio_writeto_output_pin(GPIO_RegDef_t *pGpiox ,uint8_t pin_no, uint8_t val);

#endif /* GPIO_H_ */
