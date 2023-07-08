#include<stdio.h>
#include<string.h>
struct Scomplex_number
{
	float real;
	float img;
};

struct Scomplex_number Add(struct Scomplex_number no_1, struct Scomplex_number no_2);

void main()
{
	struct Scomplex_number no_1, no_2, sum;
	printf("For 1st complex number\n");
	printf("Enter real and imaginary repectively: ");
	scanf("%f\n%f", &no_1.real, &no_1.img);
	
	printf("For 2st complex number\n");
	printf("Enter real and imaginary repectively: ");
	scanf("%f\n%f", &no_2.real, &no_2.img);
	sum = Add(no_1, no_2);
	printf("Sum=%0.1f+%0.1fi", sum.real, sum.img);
}

struct Scomplex_number Add(struct Scomplex_number no_1, struct Scomplex_number no_2)
{
	struct Scomplex_number sum;
	sum.real= no_1.real + no_2.real;
	sum.img= no_1.img + no_2.img;
	return sum;
}