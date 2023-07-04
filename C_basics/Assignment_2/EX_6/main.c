#include<stdio.h>
void main()
{
	int x, i, sum= 0;
	printf("Enter an integer: ");
	scanf("%d", &x);
	for(i=0; i<=x ; i++)
	{
		sum= sum + i;
	}
	printf("Sum = %d", sum);
}