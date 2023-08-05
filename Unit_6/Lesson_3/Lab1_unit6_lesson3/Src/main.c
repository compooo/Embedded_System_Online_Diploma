/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif


typedef volatile unsigned int vuint32_t;
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

//registers address
#define GPIOA_BASE		0x40010800
#define GPIOA_CRH		*(volatile uint32_t *)(GPIOA_BASE + 0x04)
#define GPIOA_ODR		*(volatile uint32_t *)(GPIOA_BASE + 0x0C)

#define RCC_BASE		0x40021000
#define RCC_APB2ENR		*(volatile uint32_t *)(RCC_BASE + 0x18)

int main(void)
{
	// init clock for GPIOA
	// Bit 2 IOPAEN: IO port A clock enable
	// Set and  cleared  by software
	// 0: IO port A clock disabled
	// 1: IO port A clock enabled
    // init GPIOA

	RCC_APB2ENR |= 1<<2;

	GPIOA_CRH &= 0xFF0FFFFF;
	GPIOA_CRH |= 0x00200000;
	while(1)
	{
		GPIOA_ODR |= 1<<13 ;//write 1 in pin 13
		for(int i= 0; i < 5000 ; i++);// delay
		GPIOA_ODR &= ~(1<<13);// write 0 in pin 13
		for(int i= 0; i < 5000 ; i++);// delay
	}


}
