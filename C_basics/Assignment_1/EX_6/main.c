#include<stdio.h>
void main()
{
	float a, b, temp;
	printf("Enter value of a: ");
	scanf("%f", &a);
	printf("Enter value of b: ");
	scanf("%f", &b);
	temp= a;
	a= b;
	b= temp;
	printf("After swapping, value of a = %0.2f\n", a);
	printf("After swapping, value of b = %0.1f", b);
}