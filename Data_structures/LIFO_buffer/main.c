/*
 * main.c
 *
 *  Created on: Jul 28, 2023
 *      Author: ahmed
 */

#include "lifo.h"


unsigned int buffer1[5];

void main()
{
	int i, temp= 0;
	LIFO_Buffer_t uart_lifo, I2C_lifo;
	//static allocation
	LIFO_init(&uart_lifo, buffer1, 5);
	//dynamic allocation
	// 5 * 4 = 20 byte dynamic
	unsigned int* buffer2= (unsigned int*) malloc(5 * sizeof(unsigned int));
	LIFO_init(&I2C_lifo, buffer2, 5);

	for(i= 0; i<5 ; i++)
	{
		if(LIFO_Add_item(&uart_lifo, i) == LIFO_no_error)
		{
			printf("UART_LIFO add : %d \n", i);
		}
	}
	for(i= 0; i<5 ; i++)
	{
		if(LIFO_Get_item(&uart_lifo, &temp) == LIFO_no_error)
		{
			printf("UART_LIFO get : %d \n", temp);
		}
	}
}
