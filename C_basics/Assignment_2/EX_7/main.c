#include<stdio.h>
void main()
{
	int x, i, fact= 1;
    printf("Enter an integer: ");
    scanf("%d", &x);

    if (x < 0)
        printf("Error!!! Factorial of a negative number doesn't exist.");
	else if( x == 0)
		printf("Facotrial = 1");
	else {
        for (i = 1; i <= x; i++) {
            fact = fact * i;
        }
        printf("Factorial = %d", fact);
    }
}