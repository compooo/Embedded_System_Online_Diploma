#include<stdio.h>
#include<string.h>

void main()
{
	char arr[27];
	char* ptr= arr;
	char i;
	for(i=0 ; i< 26 ; i++)
	{
		*ptr= i + 'A';
		ptr++;
	}
	ptr= arr;
	for(i=0 ; i<26 ; i++)
	{
		printf("%c\n", *ptr);
		ptr++;
	}
}
