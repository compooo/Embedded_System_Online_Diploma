/*
 * lifo.c
 *
 *  Created on: Jul 28, 2023
 *      Author: ahmed
 */

#include "lifo.h"

LIFO_status_t LIFO_Add_item(LIFO_Buffer_t* lifo_buf, unsigned int item)
{
	//check lifo is valid or not
	if(!lifo_buf->base || !lifo_buf->head)
		return LIFO_NULL;

	//check lifo is full or not
	// can use one of these if condition
	//if(lifo_buf->head >= (lifo_buf->base + (lifo_buf->length * 4)))
	if(lifo_buf->count == lifo_buf->length)
		return LIFO_full;

	// Add value
	*(lifo_buf->head)= item;
	lifo_buf->head++;
	lifo_buf->count++;
	return LIFO_no_error;
}
LIFO_status_t LIFO_Get_item(LIFO_Buffer_t* lifo_buf, unsigned int* item)
{
	//check lifo is valid or not
	if(!lifo_buf->base || !lifo_buf->head)
		return LIFO_NULL;

	//check lifo is empty ?
	if(lifo_buf->count == 0)
		return LIFO_empty;

	lifo_buf->head--;
	*item= *(lifo_buf->head);
	lifo_buf->count--;

	return LIFO_no_error;
}
LIFO_status_t LIFO_init(LIFO_Buffer_t* lifo_buf, unsigned int* buf, unsigned int length)
{
	if(buf == NULL)
		return LIFO_NULL;
	lifo_buf->base= buf;
	lifo_buf->head= buf;
	lifo_buf->length= length;
	lifo_buf->count= 0;
	return LIFO_no_error;
}

