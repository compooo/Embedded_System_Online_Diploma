#include<stdio.h>
#include<string.h>

void main()
{
	char arr[15];
	char* ptr= arr;
	char i, n;
	printf("Input the number of elements to store in the array(max 15): ");
	scanf("%d", &n);
	printf("Input %d number of elements in the array:\n", n);
	for(i=0; i<n; i++)
	{
		printf("element-%d : ", i+1);
		scanf("%d", ptr);
		ptr++;
	}
	
	printf("The elements of array in reverse order are :\n");
	for(i= n; i>0; i--)
	{
		ptr--;
		printf("element-%d : %d\n", i, *ptr);
	}
}
