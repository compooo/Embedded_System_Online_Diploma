#include<stdio.h>
void main()
{
	int i, n, value, loc;
	int arr[100];
	printf("Enter no of elements : ");
	scanf("%d", &n);
	for(i=0 ; i < n ; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	printf("Enter the element to be inserted : ");
	scanf("%d", &value);
	
	printf("\nEnter the location : ");
	scanf("%d", &loc);
	for(i= n; i >= loc ; i--)
	{
		arr[i]= arr[i-1];
	}
	arr[loc-1]= value;
	n++;
	for(i=0 ; i < n ; i++)
	{
		printf("%d\t", arr[i]);
	}
}