#include<stdio.h>
#include<string.h>
int Prime_Numbers(int number);
void main()
{
	int count, number, no1, no2;
	char flag;
	printf("Enter two numbers(intervals): ");
	scanf("%d%d", &no1, &no2);
	printf("Prime nmbers between %d and %d are: ", no1, no2);
	for(count= no1 + 1; count < no2 ; count++)
	{
		flag= Prime_Numbers(count);
		if(flag == 0)
		{
			printf("%d ", count);
		}
	}
}
int Prime_Numbers(int number)
{
	int i, flag= 0;
	for(i= 2; i < number/2 ; i++)
	{
		 if(number%i == 0)
		 {
			 flag= 1;
			 break;
		 }
	}
	return flag;
}