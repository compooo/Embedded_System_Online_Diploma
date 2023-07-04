#include<stdio.h>
void main()
{
	float x;
	printf("Enter a number: ");
	scanf("%f", &x);
	if(x == 0)
	{
		printf("You entered zero");
	}
	else if(x > 0)
	{
		printf("%0.2f is positive", x);
	}
	else
	{
		printf("%0.2f is negative", x);
	}
}