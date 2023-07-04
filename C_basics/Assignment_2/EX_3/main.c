#include<stdio.h>
void main()
{
	float x, y, z;
	printf("Enter three number: ");
	scanf("%f\n%f\n%f", &x, &y, &z);
	if(x > y)
	{
		if(x > z)
		{
			printf("Largest number = %0.2f", x);
		}
		else
		{
			printf("Largest number = %0.2f", z);
		}
	}
	else
	{
		if(y > z)
		{
			printf("Largest number = %0.2f", y);
		}
		else
		{
			printf("Largest number = %0.2f", z);
		}
	}
	
}