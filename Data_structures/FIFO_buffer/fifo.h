/*
 * fifo.h
 *
 *  Created on: Jul 28, 2023
 *      Author: ahmed
 */

#ifndef FIFO_H_
#define FIFO_H_

#include"stdio.h"
#include"stdint.h"

// USER Configuration:
//select the element type (uint8_t, uint16_t, uint32_t, ....)
#define element_type uint8_t

//when you create a buffer, use a type that define
#define width 5
element_type uart_buffer[width];

//FIFO data types
typedef struct{
	unsigned int length;
	unsigned int count;
	element_type* base;
	element_type* head;
	element_type* tail;
}FIFO_Buffer_t;

typedef enum{
	FIFO_no_error,
	FIFO_full,
	FIFO_empty,
	FIFO_null
}FIFO_status_t;

/****************************************************/

//APIs
FIFO_status_t FIFO_init(FIFO_Buffer_t* fifo, element_type* buf, uint32_t length);
FIFO_status_t FIFO_Enqueue(FIFO_Buffer_t* fifo, element_type item);
FIFO_status_t FIFO_Dequeue(FIFO_Buffer_t* fifo, element_type* item);
FIFO_status_t FIFO_IS_Full(FIFO_Buffer_t* fifo);
void FIFO_print(FIFO_Buffer_t* fifo);


#endif /* FIFO_H_ */
