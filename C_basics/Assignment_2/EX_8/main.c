#include<stdio.h>
void main()
{
	float x, y, z;
	char op;
	printf("Enter operator either + or - or * or divide : ");
	scanf("%c", &op);
    printf("Enter two operands: ");
    scanf("%f\n%f", &x, &y);

    switch(op)
	{
		case '+': z= x + y;break;
		case '-': z= x - y;break;
		case '*': z= x * y;break;
		case '/': z= x / y;break;
		default:printf("Error");
	}
	printf("%0.1f - %0.1f = %0.1f", x, y, z);
}