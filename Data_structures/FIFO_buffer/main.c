/*
 * main.c
 *
 *  Created on: Jul 28, 2023
 *      Author: ahmed
 */

#include "fifo.h"
void main()
{
	FIFO_Buffer_t FIFO_UART;
	element_type i, temp= 0;
	if(FIFO_init(&FIFO_UART, uart_buffer, 5) == FIFO_no_error)
		printf("fifo init ------Done\n");
	for(i= 0; i<7 ; i++)
	{
		printf("FIFO Enqueue (%x) \n", i);
		if(FIFO_Enqueue(&FIFO_UART, i) == FIFO_no_error)
			printf("fifo Enqueue -------Done\n");
		else
			printf("fifo Enqueue -------Failed\n");
	}

	FIFO_print(&FIFO_UART);
	if(FIFO_Dequeue(&FIFO_UART, &temp) == FIFO_no_error)
		printf("fifo Dequeue (%x) -------Done\n", temp);
	if(FIFO_Dequeue(&FIFO_UART, &temp) == FIFO_no_error)
		printf("fifo Dequeue (%x) -------Done\n", temp);
	FIFO_print(&FIFO_UART);
}

