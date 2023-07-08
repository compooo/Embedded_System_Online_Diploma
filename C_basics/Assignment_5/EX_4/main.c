#include<stdio.h>
#include<string.h>
struct SStudent_information
{
	char name[50];
	int roll;
	int marks;
};
void main()
{
	struct SStudent_information st[10];
	int i;
	printf("Enter information of student:\n");
	for(i=0 ; i<10 ; i++)
	{
		printf("\nEnter roll number ");
		scanf("%d", &st[i].roll);
		printf("Enter name: ");
		scanf("%s", &st[i].name);
		printf("Enter marks: ");
		scanf("%d", &st[i].marks);
	}
	printf("\nDisplaying information of students:\n");
	for(i=0 ; i<10 ; i++)
	{
		printf("\nInformation for roll number %d:\n",st[i].roll);
		printf("name: %s\n",st[i].name);
		printf("Marks: %d",st[i].marks);
	}
}
