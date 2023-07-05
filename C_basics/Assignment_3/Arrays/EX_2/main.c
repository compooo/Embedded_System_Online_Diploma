#include<stdio.h>
void main()
{
	int i, n;
	float arr[100], sum= 0, avg;
	printf("Enter the numbers of data: ");
	scanf("%d",&n);
	for(i=0 ; i<n ; i++)
	{
		printf("Entter number: ");
		scanf("%f", &arr[i]);
		sum= sum + arr[i];
	}
	avg= sum / n;
	printf("Average = %0.2f", avg);
}