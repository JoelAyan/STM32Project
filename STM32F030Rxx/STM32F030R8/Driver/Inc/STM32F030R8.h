/*
 * STM32F0R0Rxx.h
 *
 *  Created on: Aug 12, 2024
 *      Author: jayansola
 */

#ifndef STM32F030R8_H_
#define STM32F030R8_H_


#define FLASH_BASEADDR			   		0x00000000UL					/*Main Flash Memory,SRAM Base Address*/
#define RESERVE1_BASEADDR				0x00008000UL					/*Reserved Base Address*/
#define MAIN_FLASH_BASEADDR				0x08000000UL					/*Main Flash Memory Base Address*/
#define RESERVE2_BASEADDR				0x08008000UL					/*Reserved Base Address*/
#define SYSTEM_MEMORY_BASEADDR  		0x1FFFEC00UL 					/*System Memory Base Address*/
#define OPTION_BYTES_BASEADDR   		0x1FFFF800UL					/*Option Byte Base Address*/
#define RESERVE3_BASEADDR				0x1FFFFC00UL					/*Reserved Base Address*/
#define SRAM_BASEADDR           		0x20000000UL         			/*SRAM Base Address*/
#define RESERVE4_BASEADDR				0x20001000UL					/*Reserved Base Address*/


//BUS MACROS
#define APB_BASEADDR					0x40000000UL					/*APB BUS Base Address*/
#define APB_EXT_BASEADDR                (APB_BASEADDR + 0x00010000UL) 	/*APB EXTENDED BUS Base Address*/
#define AHB1_BASEADDR					0x40020000UL					/*AHB1 BUS Base Address*/
#define AHB2_BASEADDR					0x48000000UL                    /*AHB2 BUS Base Address*/
#define CORTEX_M0_INT_PERIPH			0xE0000000UL					/*CORTEX M0 Internal Peripherals*/

//APB PERIPHERAL MACROS DEFINITION
#define TIM2_BASEADDR  		   		   (APB_BASEADDR + 0x0000UL)		/*TIMER 2 Base Address*/
#define TIM3_BASEADDRR                 (APB_BASEADDR + 0x0400UL)		/*TIMER 3 Base Address*/
#define APB_RESERVE_BASEADDR  		   (APB_BASEADDR + 0x0800UL)		/*Reserved Address*/
#define TIM6_BASEADDRR                 (APB_BASEADDR + 0x1000UL)		/*TIMER 6 Base Address*/
#define TIM7_BASEADDRR                 (APB_BASEADDR + 0x1400UL)		/*TIMER 7 Base Address*/
#define APB_RESERVE2_BASEADDR  		   (APB_BASEADDR + 0x1800UL)		/*Reserved Address*/
#define TIM14_BASEADDRR                (APB_BASEADDR + 0x2000UL)		/*TIMER 14 Base Address*/
#define APB_RESERVE3_BASEADDR  		   (APB_BASEADDR + 0x2400UL)		/*Reserve Address*/
#define RTC_BASEADDRR                  (APB_BASEADDR + 0x2800UL)		/*RTC Base Address*/
#define WWDG_BASEADDRR                 (APB_BASEADDR + 0x2C00UL)		/*WWDG Base Address*/
#define IWDG_BASEADDRR                 (APB_BASEADDR + 0x3000UL)        /*IWDG Base Address*/
#define APB_RESERVE4_BASEADDR  		   (APB_BASEADDR + 0x3400UL)		/*Reserved Address*/
#define SPI2_BASEADDRR                 (APB_BASEADDR + 0x3800UL)        /*SPI2 Base Address*/
#define APB_RESERVE5_BASEADDR  		   (APB_BASEADDR + 0x3C00UL)		/*Reserved Address*/
#define USART2_BASEADDRR               (APB_BASEADDR + 0x4400UL)		/*USART 2 Base Address*/
#define USART3_BASEADDRR               (APB_BASEADDR + 0x4800UL)		/*USART 3 Base Address*/
#define USART4_BASEADDRR               (APB_BASEADDR + 0x4C00UL)		/*USRAT 4 Base Address*/
#define USART5_BASEADDRR               (APB_BASEADDR + 0x5000UL)		/*USRAT 5 Base Address*/
#define I2C1_BASEADDRR                 (APB_BASEADDR + 0x5400UL)		/*I2C 1 Base Address*/
#define I2C2_BASEADDRR                 (APB_BASEADDR + 0x5800UL)		/*I2C 2 Base Address*/
#define USB_BASEADDRR                  (APB_BASEADDR + 0x5C00UL)		/*USB Base Address*/
#define USB_SRAM_BASEADDRR             (APB_BASEADDR + 0x6000UL)		/*USB/CAN SRAM Base Address*/
#define CAN_BASEADDR				   (APB_BASEADDR + 0x6400UL)		/*CAN Base Address*/
#define APB_RESERVE6_BASEADDR  		   (APB_BASEADDR + 0x6800UL)        /*Reserved Address*/
#define CRS_BASEADDR				   (APB_BASEADDR + 0x6C00UL)		/*CRS Base Address*/
#define PWR_BASEADDR  		           (APB_BASEADDR + 0x7000UL)        /*PWR Base Address*/
#define DAC_BASEADDR  		           (APB_BASEADDR + 0x7400UL)		/*DAC Base Address*/
#define CEC_BASEADDR                   (APB_BASEADDR + 0x7800UL)		/*CEC Base Address*/
#define APB_RESERVE7_BASEADDR  		   (APB_BASEADDR + 0x7C00UL)		/*Reserved Address*/
#define APB_RESERVE8_BASEADDR		   (APB_BASEADDR + 0x8000UL)        /*Reserved Address*/
#define SYSCFGCOMP_BASEADDR  		   (APB_EXT_BASEADDR + 0x0000UL)		/*SYSCFGCOMP Address*/
#define EXTI_BASEADDRR                 (APB_EXT_BASEADDR + 0x0400UL)        /*EXTI Base Address*/
#define APB_RESERVE9_BASEADDR  		   (APB_EXT_BASEADDR + 0x0800UL)		/*Reserved Address*/
#define USART6_BASEADDRR               (APB_EXT_BASEADDR + 0x1400UL)		/*USART 2 Base Address*/
#define USART7_BASEADDRR               (APB_EXT_BASEADDR + 0x1800UL)		/*USART 3 Base Address*/
#define USART8_BASEADDRR               (APB_EXT_BASEADDR + 0x1C00UL)		/*USRAT 4 Base Address*/
#define APB_RESERVE10_BASEADDRR        (APB_EXT_BASEADDR + 0x2000UL)		/*Reserved Address*/
#define ADC_BASEADDRR                  (APB_EXT_BASEADDR + 0x2400UL)		/*ADC Base Address*/
#define APB_RESERVE11_BASEADDRR        (APB_EXT_BASEADDR + 0x2800UL)		/*Reserved Address*/
#define TIM1_BASEADDRR                 (APB_EXT_BASEADDR + 0x2C00UL)		/*TIM 1 Base Address*/
#define SPI1_I2S1_BASEADDRR            (APB_EXT_BASEADDR + 0x3000UL)		/*SPI1_I2S1 Base Address*/
#define APB_RESERVE12_BASEADDR		   (APB_EXT_BASEADDR + 0x3400UL)		/*Reserved Address*/
#define USART1_BASEADDR  		       (APB_EXT_BASEADDR + 0x3800UL)        /*USRAT 1 Base Address*/
#define APB_RESERVE13_BASEADDR		   (APB_EXT_BASEADDR + 0x3C00UL)		/*Reserved Address*/
#define TIM15_BASEADDR  		       (APB_EXT_BASEADDR + 0x4000UL)        /*TIM 15 Base Address*/
#define TIM16_BASEADDR  		       (APB_EXT_BASEADDR + 0x4400UL)		/*TIM 16 Base Address*/
#define TIM17_BASEADDR                 (APB_EXT_BASEADDR + 0x4800UL)		/*TIM 17 Base Address*/
#define APB_RESERVE14_BASEADDR  	   (APB_EXT_BASEADDR + 0x4C00UL)		/*Reserved Address*/
#define DBGMCU_BASEADDR 	           (APB_EXT_BASEADDR + 0x5800UL)		/*DBGMCU Base Address*/
#define APB_RESERVE15_BASEADDR		   (APB_EXT_BASEADDR + 0x5800UL)        /*Reserved Address*/

//AHB1 PERIPHERAL MACROS DEFINITION
#define DMA_BASEADDR                   (AHB1_BASEADDR + 0x0000UL)			/*DMA Base Address*/
#define DMA2_BASEADDR                  (AHB1_BASEADDR + 0x0400UL)			/*DMA 2 Base Address*/
#define AHB1_RESERVE_BASEADDR  		   (AHB1_BASEADDR + 0x0800UL)			/*Reserved Address*/
#define RCC_BASEADDR                   (AHB1_BASEADDR + 0x1000UL)           /*RCC Base Address*/
#define AHB1_RESERVE1_BASEADDR  	   (AHB1_BASEADDR + 0x1400UL)           /*Reserved Address*/
#define FLASH_INTERFACE_BASADDR        (AHB1_BASEADDR + 0x2000UL)			/*Flash Interface Base Address*/
#define AHB1_RESERVE2_BASEADDR  	   (AHB1_BASEADDR + 0x2400UL)           /*Reserved Address*/
#define CRC_BASEADDR  	               (AHB1_BASEADDR + 0x3000UL)  			/*CRC Base Address*/
#define AHB1_RESERVE3_BASEADDR  	   (AHB1_BASEADDR + 0x3400UL)			/*Reserved Address*/
#define TSC_BASEADDR				   (AHB1_BASEADDR + 0x4000UL)			/*TSC Base Address*/
#define AHB1_RESERVE4_BASEADDR  	   (AHB1_BASEADDR + 0x4400UL)			/*Reserved Address*/

//AHB2 PERIPHERAL MACROS DEFINITION
#define GPIOA_BASEADDR  			   (AHB2_BASEADDR + 0x0000UL)			/*GPIO A Base Address*/
#define GPIOB_BASEADDR  			   (AHB2_BASEADDR + 0x0400UL)			/*GPIO B Base Address*/
#define GPIOC_BASEADDR  			   (AHB2_BASEADDR + 0x0800UL)           /*GPIO C Base Address*/
#define GPIOD_BASEADDR  			   (AHB2_BASEADDR + 0x0C00UL)			/*GPIO D Base Address*/
#define GPIOE_BASEADDR  		       (AHB2_BASEADDR + 0x1000UL)			/*GPIO E Base Address*/
#define GPIOF_BASEADDR  		       (AHB2_BASEADDR + 0x1400UL)			/*GPIO F Base Address*/
#define AHB2_RESERVE1_BASEADDR  	   (AHB2_BASEADDR + 0x1800UL)			/*Reserved Address*/




//GPIOx TYPEDEF
/*
typedef struct{
	uint32_t  MODER;
	uint8_t   OTYPER;
	uint32_t  OSPEEDER;
	unit32_t  PUPDR;
	uint8_t   IDR;
	uint8_t   ODR;
	uint32_t  BSRR;
	uint8_t   LCKR;
	uint8_t   AFR[2];
	uint8_t   BRR;
}GPIO_Reg_t;
*/
#endif /* STM32F030R8_H_ */
