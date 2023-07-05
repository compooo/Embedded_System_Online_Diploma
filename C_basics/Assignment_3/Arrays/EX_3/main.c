#include<stdio.h>
void main()
{
	int i, j, row, col;
	int arr[100][100], Tran[100][100];
	printf("Enter rows and column matrix: ");
	scanf("%d\n%d", &row, &col);
	printf("\nEnter elements of matrix\n");
	for(i=0 ; i<row ; i++)
	{
		for(j=0 ; j<col ; j++)
		{
			printf("Enter elements a%d%d: ", i + 1, j + 1);
			scanf("%d", &arr[i][j]);
		}
	}
	printf("\nEntered Matrix:\n");
	for(i=0 ; i<row ; i++)
	{
		for(j=0 ; j<col ; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n\n");
	}
	//Transpose
	for(i=0 ; i<row ; i++)
	{
		for(j=0 ; j<col ; j++)
		{
			Tran[j][i]= arr[i][j];
		}
	}
	printf("\n\nTranspose of Matrix:\n");
	for(i=0 ; i<col ; i++)
	{
		for(j=0 ; j<row ; j++)
		{
			printf("%d\t", Tran[i][j]);
		}
		printf("\n\n");
	}
}