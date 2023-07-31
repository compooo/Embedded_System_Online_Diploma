/*
 * fifo.c
 *
 *  Created on: Jul 28, 2023
 *      Author: ahmed
 */
#include "fifo.h"

FIFO_status_t FIFO_init(FIFO_Buffer_t* fifo, element_type* buf, uint32_t length)
{
	//check buffer is valid
	if(buf == NULL)
		return FIFO_null;
	fifo->base= buf;
	fifo->head= buf;
	fifo->tail= buf;
	fifo->length= length;
	fifo->count= 0;

	return FIFO_no_error;
}
FIFO_status_t FIFO_Enqueue(FIFO_Buffer_t* fifo, element_type item)
{
	//check buffer is valid
	if(!fifo->base || !fifo->head || !fifo->tail)
		return FIFO_null;

	//check fifo is full or not
	if(FIFO_IS_Full(fifo) ==  FIFO_full)
		return FIFO_full;

	//enqueue
	*(fifo->head)= item;
	fifo->count++;
	//fifo circular
	if(fifo->head == (fifo->base + (fifo->length * sizeof(element_type))))
		fifo->head = fifo->base;
	else
		fifo->head++;
	return FIFO_no_error;
}
FIFO_status_t FIFO_Dequeue(FIFO_Buffer_t* fifo, element_type* item)
{
	//check buffer is valid
	if(!fifo->base || !fifo->head || !fifo->tail)
		return FIFO_null;

	// check fifo buffer is empty or not
	if(fifo->count == 0)
		return FIFO_empty;

	*item= *(fifo->tail);
	fifo->count--;

	//fifo circular
	if(fifo->tail == (fifo->base + (fifo->length * sizeof(element_type))))
		fifo->tail = fifo->base;
	else
		fifo->tail++;

	return FIFO_no_error;
}
FIFO_status_t FIFO_IS_Full(FIFO_Buffer_t* fifo)
{
	//check buffer is valid
	if(!fifo->base || !fifo->head || !fifo->tail)
		return FIFO_null;

	if(fifo->count == fifo->length)
		return FIFO_full;

	return FIFO_no_error;
}
void FIFO_print(FIFO_Buffer_t* fifo)
{
	element_type* temp;
	element_type i;
	if(fifo->count == 0)
	{
		printf("fifo is empty\n");
	}else{
		temp= fifo->tail;
		printf("=========fifo_print=========\n");
		for(i= 0; i<fifo->count ; i++)
		{
			printf("%x \n", *temp);
			temp++;
		}
		printf("==================\n");
	}
}
