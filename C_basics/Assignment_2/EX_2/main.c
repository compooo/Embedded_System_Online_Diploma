#include<stdio.h>
void main()
{
	char x;
	printf("Enter an alphabet: ");
	scanf("%c", &x);
	switch(x)
	{
		case 'a': printf("%c is a vowel", x);break;
		case 'e': printf("%c is a vowel", x);break;
		case 'i': printf("%c is a vowel", x);break;
		case 'o': printf("%c is a vowel", x);break;
		case 'u': printf("%c is a vowel", x);break;
		default: printf("%c is a consonant", x);
	}
}