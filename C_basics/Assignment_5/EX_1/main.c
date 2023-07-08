#include<stdio.h>
#include<string.h>
struct SStudent_information
{
	char name[50];
	int roll;
	float marks;
};
void main()
{
	struct SStudent_information x;
	printf("Enter information of student: \nEnter name: ");
	scanf("%s", &x.name);
	printf("Enter roll number: ");
	scanf("%d", &x.roll);
	printf("Enter marks: ");
	scanf("%f", &x.marks);
	
	printf("\nDisplaying Information\n");
	printf("name: %s\n",x.name);
	printf("Roll: %d\n",x.roll);
	printf("Marks: %0.1f",x.marks);
}
