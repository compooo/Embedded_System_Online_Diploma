/*
 * lifo.h
 *
 *  Created on: Jul 28, 2023
 *      Author: ahmed
 */

#ifndef LIFO_H_
#define LIFO_H_

#include "stdio.h"
#include "stdlib.h"

//type definitions
typedef struct {
	unsigned int length;
	unsigned int count;
	unsigned int* base;
	unsigned int* head;
}LIFO_Buffer_t;

typedef enum {
	LIFO_no_error,
	LIFO_full,
	LIFO_empty,
	LIFO_NULL
}LIFO_status_t;

//APIs
LIFO_status_t LIFO_Add_item(LIFO_Buffer_t* lifo_buf, unsigned int item);
// (int* item) because here i will get value
LIFO_status_t LIFO_Get_item(LIFO_Buffer_t* lifo_buf, unsigned int* item);
//create buffer
LIFO_status_t LIFO_init(LIFO_Buffer_t* lifo_buf, unsigned int* buf, unsigned int length);

#endif /* LIFO_H_ */
