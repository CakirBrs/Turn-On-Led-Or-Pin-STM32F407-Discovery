#ifndef _STM32F407XX_H
#define _STM32F407XX_H

//
#define PERIPHERAL_BASE_ADDR 			0x40000000U
#define APB1PERIPHERAL_BASE_ADDR 		PERIPHERAL_BASE_ADDR
#define APB2PERIPHERAL_BASE_ADDR 		0x40010000U
#define AHB1PERIPHERAL_BASE_ADDR 		0x40020000U
#define AHB2PERIPHERAL_BASE_ADDR 		0x50050000U
#define AHB3PERIPHERAL_BASE_ADDR 		0x60000000

//APB1
#define TIM2_BASEADDR 		(APB1PERIPHERAL_BASE_ADDR + 0x0000)
#define TIM3_BASEADDR 		(APB1PERIPHERAL_BASE_ADDR + 0x0400)
#define TIM4_BASEADDR 		(APB1PERIPHERAL_BASE_ADDR + 0x0800)
#define TIM5_BASEADDR 		(APB1PERIPHERAL_BASE_ADDR + 0x0C00)
#define TIM6_BASEADDR 		(APB1PERIPHERAL_BASE_ADDR + 0x1000)
#define TIM7_BASEADDR 		(APB1PERIPHERAL_BASE_ADDR + 0x1400)
#define TIM12_BASEADDR 		(APB1PERIPHERAL_BASE_ADDR + 0x1800)
#define TIM13_BASEADDR 		(APB1PERIPHERAL_BASE_ADDR + 0x1C00)
#define TIM14_BASEADDR 		(APB1PERIPHERAL_BASE_ADDR + 0x2000)
#define RTC_BKP_BASEADDR 	(APB1PERIPHERAL_BASE_ADDR + 0x2800)
#define WWDG_BASEADDR 		(APB1PERIPHERAL_BASE_ADDR + 0x2C00)
#define IWDG_BASEADDR 		(APB1PERIPHERAL_BASE_ADDR + 0x3000)
#define I2S2ext_BASEADDR 	(APB1PERIPHERAL_BASE_ADDR + 0x2C00)
#define SP2_I2S2_BASEADDR 	(APB1PERIPHERAL_BASE_ADDR + 0x3800)
#define SP3_I2S3_BASEADDR 	(APB1PERIPHERAL_BASE_ADDR + 0x3C00)
#define I2S3ext_BASEADDR 	(APB1PERIPHERAL_BASE_ADDR + 0x4000)
#define USART2_BASEADDR 	(APB1PERIPHERAL_BASE_ADDR + 0x4400)
#define USART3_BASEADDR 	(APB1PERIPHERAL_BASE_ADDR + 0x4800)
#define UART4_BASEADDR 		(APB1PERIPHERAL_BASE_ADDR + 0x4C00)
#define UART5_BASEADDR 		(APB1PERIPHERAL_BASE_ADDR + 0x5000)
#define I2C1_BASEADDR 		(APB1PERIPHERAL_BASE_ADDR + 0x5400)
#define I2C2_BASEADDR 		(APB1PERIPHERAL_BASE_ADDR + 0x5800)
#define I2C3_BASEADDR 		(APB1PERIPHERAL_BASE_ADDR + 0x5C00)
#define CAN1_BASEADDR 		(APB1PERIPHERAL_BASE_ADDR + 0x6400)
#define CAN2_BASEADDR 		(APB1PERIPHERAL_BASE_ADDR + 0x6800)
#define PWR_BASEADDR 		(APB1PERIPHERAL_BASE_ADDR + 0x7000)
#define DAC_BASEADDR 		(APB1PERIPHERAL_BASE_ADDR + 0x7400)

//APB2
#define TIM1_BASEADDR 		(APB2PERIPHERAL_BASE_ADDR + 0x0000)
#define TIM8_BASEADDR 		(APB2PERIPHERAL_BASE_ADDR + 0x0400)
#define USART1_BASEADDR 	(APB2PERIPHERAL_BASE_ADDR + 0x1000)
#define USART6_BASEADDR 	(APB2PERIPHERAL_BASE_ADDR + 0x1400)
#define ADC1_2_3_BASEADDR 	(APB2PERIPHERAL_BASE_ADDR + 0x2000)
#define SDIO_BASEADDR 		(APB2PERIPHERAL_BASE_ADDR + 0x2C00)
#define SPI1_BASEADDR 		(APB2PERIPHERAL_BASE_ADDR + 0x3000)
#define SYSCFG_BASEADDR 	(APB2PERIPHERAL_BASE_ADDR + 0x3800)
#define EXTI_BASEADDR 		(APB2PERIPHERAL_BASE_ADDR + 0x3C00)
#define TIM9_BASEADDR 		(APB2PERIPHERAL_BASE_ADDR + 0x4000)
#define TIM10_BASEADDR 		(APB2PERIPHERAL_BASE_ADDR + 0x4400)
#define TIM11_BASEADDR 		(APB2PERIPHERAL_BASE_ADDR + 0x4800)

//AHB1
#define GPIOA_BASEADDR 				(AHB1PERIPHERAL_BASE_ADDR + 0x0000)
#define GPIOB_BASEADDR 				(AHB1PERIPHERAL_BASE_ADDR + 0x0400)
#define GPIOC_BASEADDR 				(AHB1PERIPHERAL_BASE_ADDR + 0x0800)
#define GPIOD_BASEADDR 				(AHB1PERIPHERAL_BASE_ADDR + 0x0C00)
#define GPIOE_BASEADDR 				(AHB1PERIPHERAL_BASE_ADDR + 0x1000)
#define GPIOF_BASEADDR 				(AHB1PERIPHERAL_BASE_ADDR + 0x1400)
#define GPIOG_BASEADDR 				(AHB1PERIPHERAL_BASE_ADDR + 0x1800)
#define GPIOH_BASEADDR 				(AHB1PERIPHERAL_BASE_ADDR + 0x1C00)
#define GPIOI_BASEADDR 				(AHB1PERIPHERAL_BASE_ADDR + 0x2000)
#define CRC_BASEADDR 				(AHB1PERIPHERAL_BASE_ADDR + 0x3000)
#define RCC_BASEADDR	 			(AHB1PERIPHERAL_BASE_ADDR + 0x3800)
#define FLASH_INTERFACE_BASEADDR	(AHB1PERIPHERAL_BASE_ADDR + 0x3C00)
#define BKPSRAM_BASEADDR 			(AHB1PERIPHERAL_BASE_ADDR + 0x4000)
#define DMA1_BASEADDR 				(AHB1PERIPHERAL_BASE_ADDR + 0x6000)
#define DMA2_BASEADDR 				(AHB1PERIPHERAL_BASE_ADDR + 0x6400)
#define ETHERNET_MAC_BASEADDR 		(AHB1PERIPHERAL_BASE_ADDR + 0x8000)
#define USB_OTG_HS_BASEADDR 		(AHB1PERIPHERAL_BASE_ADDR + 0x40000)
#define USB_OTG_FS_BASEADDR 		(0x50000000U)


//AHB2
#define DCMI_BASEADDR 				(AHB2PERIPHERAL_BASE_ADDR + 0x0000)
#define RNG_BASEADDR 				(AHB2PERIPHERAL_BASE_ADDR + 0x0800)



typedef struct{
	volatile uint32_t	CR;
	volatile uint32_t	PLLCFGR;
	volatile uint32_t	CFGR;
	volatile uint32_t	CIR;
	volatile uint32_t	AHB1STR;
	volatile uint32_t	AHB2STR;
	volatile uint32_t	AHB3STR;
	uint32_t RESERVED0;
	volatile uint32_t	APB1STR;
	volatile uint32_t	APB2STR;
	uint32_t RESERVED1[2];
	volatile uint32_t	AHB1ENR;
	volatile uint32_t	AHB2ENR;
	volatile uint32_t	AHB3ENR;
	uint32_t RESERVED2;
	volatile uint32_t	APB1ENR;
	volatile uint32_t	APB2ENR;
	uint32_t RESERVED3;
	volatile uint32_t	AHB1LPENR;
	volatile uint32_t	AHB2LPENR;
	volatile uint32_t	AHB3LPENR;
	uint32_t RESERVED4;
	volatile uint32_t	APB1LPENR;
	volatile uint32_t	APB2LPENR;
	uint32_t RESERVED5[2];
	volatile uint32_t	BDCR;
	volatile uint32_t	CSR;
	uint32_t RESERVED6[2];
	volatile uint32_t	SSCGR;
	volatile uint32_t	PLLI2SCFGR;
	volatile uint32_t	PLLSAICFGR;
	volatile uint32_t	DCKCFGR;
}RCC_RegDef_t;

typedef struct{
	volatile uint32_t MODER;
	volatile uint32_t OTYPER;
	volatile uint32_t OSPEEDR;
	volatile uint32_t PUPDR;
	volatile uint32_t IDR;
	volatile uint32_t ODR;
	volatile uint32_t BSRR;
	volatile uint32_t LCKR;
	volatile uint32_t AFR[2]; //AFR[0]-->L AFR[1]-->H
}GPIO_RegDef_t;


#define 	GPIOA					((GPIO_RegDef_t*)GPIOA_BASEADDR)
#define 	GPIOB					((GPIO_RegDef_t*)GPIOB_BASEADDR)
#define 	GPIOC					((GPIO_RegDef_t*)GPIOC_BASEADDR)
#define 	GPIOD					((GPIO_RegDef_t*)GPIOD_BASEADDR)
#define 	GPIOE					((GPIO_RegDef_t*)GPIOE_BASEADDR)
#define 	GPIOF					((GPIO_RegDef_t*)GPIOF_BASEADDR)
#define 	GPIOG					((GPIO_RegDef_t*)GPIOG_BASEADDR)
#define 	GPIOH					((GPIO_RegDef_t*)GPIOH_BASEADDR)
#define 	GPIOI					((GPIO_RegDef_t*)GPIOI_BASEADDR)


#define 	RCC  					((RCC_RegDef_t *) RCC_BASEADDR)


#define GPIOA_CLOCK_ENABLE()		(RCC->AHB1ENR |=(1<<0))
#define GPIOB_CLOCK_ENABLE()		(RCC->AHB1ENR |=(1<<1))
#define GPIOC_CLOCK_ENABLE()		(RCC->AHB1ENR |=(1<<2))
#define GPIOD_CLOCK_ENABLE()		(RCC->AHB1ENR |=(1<<3))
#define GPIOE_CLOCK_ENABLE()		(RCC->AHB1ENR |=(1<<4))
#define GPIOF_CLOCK_ENABLE()		(RCC->AHB1ENR |=(1<<5))
#define GPIOG_CLOCK_ENABLE()		(RCC->AHB1ENR |=(1<<6))
#define GPIOH_CLOCK_ENABLE()		(RCC->AHB1ENR |=(1<<7))
#define GPIOI_CLOCK_ENABLE()		(RCC->AHB1ENR |=(1<<8))

#endif

