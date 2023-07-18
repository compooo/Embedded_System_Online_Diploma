#include<stdio.h>
#include<string.h>

void main()
{
	int m=29;
	int* ab= &m;
	printf("Address of m : %p\nValue of m : %d\n\n", &m, m);
	
	printf("Now ab is assignmed with the address of m\n");
	printf("Address of pointer ab : %p\nContent of pointer : %d\n\n", ab, *ab);
	
	m= 34;
	printf("The value of m assigned to %d now\n", m);
	printf("Address of pointer ab : %p\nContent of pointer : %d\n\n", ab, *ab);
	
	*ab= 7;
	printf("The pointer variable ab is assigned wirh thw value %d now\n", m);
	printf("Address of m : %p\nValue of m : %d\n\n", &m, m);
}
