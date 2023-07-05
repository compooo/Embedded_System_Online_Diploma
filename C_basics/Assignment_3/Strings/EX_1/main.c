#include<stdio.h>
void main()
{
	char arr[100],ch;
	int i, counter= 0;
	printf("Enter a string: ");
	gets(arr);
	printf("Enter a character to find frequency: ");
	scanf("%c", &ch);
	for(i=0 ; arr[i] != '\0' ; i++)
	{
		if (arr[i] == ch)
				counter++;
	}
	printf("Frequency of %c = %d", ch, counter);
}