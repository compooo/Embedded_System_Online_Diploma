#include<stdio.h>
#include<string.h>
int Power(int base, int po_number);
void main()
{
	int base, po_number;
	printf("Enter base number: ");
	scanf("%d", &base);
	printf("Enter power number(positive integer): ");
	scanf("%d", &po_number);
	Power(base, po_number);
	printf("%d^%d = %d", base, po_number, Power(base, po_number));
}

int Power(int base, int po_number)
{
	if(po_number != 0)
	{
		return (base * Power(base, po_number - 1));
	}
	else 
		return 1;
}
	
