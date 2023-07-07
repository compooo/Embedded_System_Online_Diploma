#include<stdio.h>
#include<string.h>
void Reverse();
void main()
{
	char c;
	printf("Enter a sentence: ");
	Reverse();
}
void Reverse()
{
	char c;
	scanf("%c",&c); 
	if( c != '\n')
	{
		Reverse();
		printf("%c", c);
	}
}