#include<stdio.h>
#include<string.h>
int factorial(int number);
void main()
{
	int number, result;
	printf("Enter an positive integer: ");
	scanf("%d", &number);
	result= factorial(number);
	printf("Factorial of %d = %d", number, result);
}
int factorial(int number)
{
	if(number!= 1)
		number *= factorial(number-1);
	return number;
}