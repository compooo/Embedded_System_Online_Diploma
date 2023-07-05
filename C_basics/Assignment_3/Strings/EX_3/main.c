#include<stdio.h>
#include<string.h>
void main()
{
	char arr[100], ch, temp;
	int i, rev;
	printf("Enter the string : ");
	gets(arr);
	rev= strlen(arr) - 1;
	for(i=0 ; i < rev ; i++)
	{
		temp= arr[i];
		arr[i]= arr[rev];
		arr[rev]= temp;
		rev--;
	}
	printf("Reverse string is : %s", arr);
}