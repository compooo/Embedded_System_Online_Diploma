#include<stdio.h>
#include<string.h>
struct SDistance
{
	int feet;
	float inch;
};
void main()
{
	struct SDistance di_1, di_2, sum;
	printf("Enter information for 1st distance: \n");
	printf("Enter feet: ");
	scanf("%d", &di_1.feet);
	printf("Enter inch: ");
	scanf("%f", &di_1.inch);
	//distance 2
	printf("\nEnter information for 2st distance: \n");
	printf("Enter feet: ");
	scanf("%d", &di_2.feet);
	printf("Enter inch: ");
	scanf("%f", &di_2.inch);
	
	sum.feet= di_1.feet + di_2.feet;
	sum.inch= di_1.inch + di_2.inch;
	
	if( sum.inch > 12.0)
	{
		sum.inch -= 12;
		++sum.feet;
	}
	printf("\nSum of distances=%d\'-%0.1f\"", sum.feet, sum.inch);
}
