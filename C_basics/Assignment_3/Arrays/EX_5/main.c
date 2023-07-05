#include<stdio.h>
void main()
{
	int i, n, value;
	int arr[100];
	printf("Enter no of elements : ");
	scanf("%d", &n);
	for(i=0 ; i < n ; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	printf("Enter the element to be searched : ");
	scanf("%d", &value);
	for(i=0 ; i < n ; i++)
	{
		if(arr[i] == 44)
		printf("Number found at the location = %d", i+1);
	}
}