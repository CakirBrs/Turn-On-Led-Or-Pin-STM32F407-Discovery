/*
 * gpio.c
 *
 *  Created on: 24.01.23
 *      Author: Baris
 */
#include "gpio.h"


PRIVATE void gpio_perip_en(GPIO_RegDef_t * pGpiox){
	if(pGpiox==GPIOA)
		GPIOA_CLOCK_ENABLE();
	else if(pGpiox==GPIOB)
		GPIOB_CLOCK_ENABLE();
	else if(pGpiox==GPIOC)
		GPIOC_CLOCK_ENABLE();
	else if(pGpiox==GPIOD)
		GPIOD_CLOCK_ENABLE();
	else if(pGpiox==GPIOE)
		GPIOE_CLOCK_ENABLE();
	else if(pGpiox==GPIOF)
		GPIOF_CLOCK_ENABLE();
	else if(pGpiox==GPIOG)
		GPIOG_CLOCK_ENABLE();
	else if(pGpiox==GPIOH)
		GPIOH_CLOCK_ENABLE();
	else if(pGpiox==GPIOI)
		GPIOI_CLOCK_ENABLE();
}


void gpio_init(GPIO_Handle_t * pGpio_handle){

	uint32_t temp=0;

	//Clock Enable
	gpio_perip_en(pGpio_handle->pGpioX);

	//Pin Mode Set
	temp = (pGpio_handle->gPIO_pinConfig.pin_mode << (2 * pGpio_handle->gPIO_pinConfig.pin_number));
	pGpio_handle->pGpioX->MODER &= ~(0b11<<(2*pGpio_handle->gPIO_pinConfig.pin_number));
	pGpio_handle->pGpioX->MODER |=temp;

	//Speed Set
	temp = (pGpio_handle->gPIO_pinConfig.pin_speed << (2 * pGpio_handle->gPIO_pinConfig.pin_number));
	pGpio_handle->pGpioX->OSPEEDR &= ~(0b11<<(2*pGpio_handle->gPIO_pinConfig.pin_number));
	pGpio_handle->pGpioX->OSPEEDR |=temp;

	//PullUp/PullDown Set
	temp = (pGpio_handle->gPIO_pinConfig.pin_pupd << (2 * pGpio_handle->gPIO_pinConfig.pin_number));
	pGpio_handle->pGpioX->PUPDR &= ~(0b11<<(2*pGpio_handle->gPIO_pinConfig.pin_number));
	pGpio_handle->pGpioX->PUPDR |=temp;

	//OType Set
	temp = (pGpio_handle->gPIO_pinConfig.pin_otype << (pGpio_handle->gPIO_pinConfig.pin_number));
	pGpio_handle->pGpioX->OTYPER &= ~(0b1<<(pGpio_handle->gPIO_pinConfig.pin_number));
	pGpio_handle->pGpioX->OTYPER |=temp;


}


void  gpio_writeto_output_pin(GPIO_RegDef_t *pGpiox ,uint8_t pin_no, uint8_t val){

	if(val==GPIO_PIN_SET)
		pGpiox->ODR |= (1u<<pin_no);
	else
		pGpiox->ODR &=~ (1u<<pin_no);


}




