#include<stdio.h>
#include<string.h>
#define PI 3.14
#define area(r) (PI * r * r)
void main()
{
	int radius;
	printf("Enter the radius: ");
	scanf("%d", &radius);
	
	printf("Area= %0.2f", area(radius));
}
