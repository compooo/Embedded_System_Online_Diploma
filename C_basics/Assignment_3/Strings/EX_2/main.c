#include<stdio.h>
void main()
{
	char arr[100],ch;
	int i, counter= 0;
	printf("Enter a string: ");
	gets(arr);
	for(i=0 ; arr[i] != '\0' ; i++)
	{
		counter++;
	}
	printf("Length of string = %d", counter);
}