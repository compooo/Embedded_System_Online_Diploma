#include "uart.h"
#define UART0DR          *((volatile unsigned int*)((unsigned int*)0x101F1000))

void Uart_Send_string(unsigned char* P_tx_string)
{
	while(*P_tx_string != '\0')
	{
		//because uart pointer / int that we change pointer to char to pointer to integer
		UART0DR = (unsigned int)(*P_tx_string);
		P_tx_string++;
	}
}