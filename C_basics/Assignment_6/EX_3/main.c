#include<stdio.h>
#include<string.h>

void main()
{
	char arr[30];
	char rev[30];
	char* ptr= arr;
	char* ptr_rev= rev;
	char i;
	printf("Pointer : Print a string in reverse order : \n ------------------\n");
	printf("Input a string : ");
	scanf("%s", arr);
	while( *ptr != '\0')
	{
		
		ptr++;
		i++;
	}
	while( i>=0)
	{
		ptr--;
		*ptr_rev= *ptr;
		ptr_rev++;
		--i;
	}
	
	*ptr_rev= '\0';
	printf("Reverse of the string is : %s\n", rev);
}
