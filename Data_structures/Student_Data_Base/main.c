/*
 * main.c
 *
 *  Created on: Jul 29, 2023
 *      Author: ahmed
 */

#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "conio.h"


#define DPRINTF(...)		{fflush(stdout); \
		fflush(stdin); \
		printf(__VA_ARGS__); \
		fflush(stdout); \
		fflush(stdin);}


//effective data
struct Sdata{
	int ID;
	char name[40];
	float height;
};

//linked list node
struct Sstudent
{
	struct Sdata Student;
	struct Sstudent* PNextStudent;
};

struct Sstudent* gpFirstStudent= NULL;

void Add_Student()
{
	struct Sstudent* pNewStudent;
	struct Sstudent* pLastStudent;
	char temp_text[40];
	//check list is empty or not
	if(gpFirstStudent == NULL)
	{
		//Create new record
		pNewStudent= (struct Sstudent*) malloc(sizeof(struct Sstudent));
		//assign it to gpfirst
		gpFirstStudent = pNewStudent;
	}else // list contains a records
	{
		//navigate until reach to the last record
		pLastStudent = gpFirstStudent;
		while(pLastStudent->PNextStudent)
			pLastStudent= pLastStudent->PNextStudent;
		//create new record
		pNewStudent= (struct Sstudent*) malloc(sizeof(struct Sstudent));
		pLastStudent->PNextStudent= pNewStudent;
	}

	//fill new record
	DPRINTF("\n Enter the ID:");
	gets(temp_text);
	// (atoi): convert from array to integer
	pNewStudent->Student.ID= atoi(temp_text);

	DPRINTF("\n Enter student full name:");
	gets(pNewStudent->Student.name);

	DPRINTF("\n Enter the height:");
	gets(temp_text);
	pNewStudent->Student.height= atof(temp_text);

	//set the next pointer (new_student) null
	pNewStudent->PNextStudent= NULL;
}


int delete_student()
{
	char temp_text[40];
	unsigned int selected_ID;
	// get the selected ID
	DPRINTF("\n Enter the student ID to be deleted: ");
	gets(temp_text);
	selected_ID= atoi(temp_text);

	//list is empty or not
	if(gpFirstStudent)
	{
		struct Sstudent* pSelectedStudent= gpFirstStudent;
		struct Sstudent* pPreviousStudent= NULL;

		//first pSelectedStudent points to first student then loop on all recorda
		while(pSelectedStudent)
		{
			//compare each node with the selected ID
			if(pSelectedStudent->Student.ID == selected_ID)
			{
				//check previous student is available or not
				//if available, the first is not the selected one
				if(pPreviousStudent)
				{
					pPreviousStudent->PNextStudent= pSelectedStudent->PNextStudent;
				}
				else //1st student == selected ID
				{
					gpFirstStudent= pSelectedStudent->PNextStudent;
				}
				free(pSelectedStudent);
				return 1;
			}

			pPreviousStudent= pSelectedStudent;
			pSelectedStudent= pSelectedStudent->PNextStudent;
		}

	}

	DPRINTF("\n cannot find student ID");
	return 0;

}

void view_Students()
{
	struct Sstudent* pCurrentStudent= gpFirstStudent;
	int count = 0;
	if(gpFirstStudent == NULL)
	{
		DPRINTF("\n Empty List");
	}
	else
	{
		while(pCurrentStudent)
		{
			DPRINTF("\n record number %d", count+1);
			DPRINTF("\n \tID: %d", pCurrentStudent->Student.ID);
			DPRINTF("\n \tName: %s", pCurrentStudent->Student.name);
			DPRINTF("\n \tHeigth: %f", pCurrentStudent->Student.height);
			pCurrentStudent= pCurrentStudent->PNextStudent;
			count++;
		}
	}
}

void DeleteAll()
{
	struct Sstudent* pCurrentStudent= gpFirstStudent;
	int count = 0;
	if(gpFirstStudent == NULL)
	{
		DPRINTF("\n Empty List");
	}else
	{
		while(pCurrentStudent)
		{
			struct Sstudent* pTempStudent= pCurrentStudent;
			pCurrentStudent= pCurrentStudent->PNextStudent;
			free(pTempStudent);
			count++;
		}
		gpFirstStudent= NULL;
	}
}

void GetNth()
{
	struct Sstudent* pCurrentStudent= gpFirstStudent;
	char temp_text[40];
	unsigned int count = 0, Passed_index= 0;
	DPRINTF("\n Enter the index: ");
	gets(temp_text);
	Passed_index= atoi(temp_text);
	if(gpFirstStudent == NULL)
	{
		DPRINTF("\n Empty List");
	}
	else
	{
		while(pCurrentStudent)
		{
			if (count == Passed_index)
			{
				DPRINTF("\n record number %d", count+1);
				DPRINTF("\n \tID: %d", pCurrentStudent->Student.ID);
				DPRINTF("\n \tName: %s", pCurrentStudent->Student.name);
				DPRINTF("\n \tHeigth: %f", pCurrentStudent->Student.height);
			}
			pCurrentStudent= pCurrentStudent->PNextStudent;
			count++;
		}
	}

}

void Get_Length_of_list()
{
	struct Sstudent* pCurrentStudent= gpFirstStudent;
	int count = 0;
	if(gpFirstStudent == NULL)
	{
		DPRINTF("\n Empty List");
	}
	else
	{
		while(pCurrentStudent)
		{
			pCurrentStudent= pCurrentStudent->PNextStudent;
			count++;
		}
		DPRINTF("\nLength of the list is: %d", count);
	}
}

void Middle_of_list()
{
	struct Sstudent* pCurrentStudent= gpFirstStudent;
	int count_1 = 0, count_2 = 0;
	if(gpFirstStudent == NULL)
	{
		DPRINTF("\n Empty List");
	}
	else
	{
		while(pCurrentStudent)
		{
			pCurrentStudent= pCurrentStudent->PNextStudent;
			count_1++;
		}

		pCurrentStudent= gpFirstStudent;

		while(pCurrentStudent)
		{
			if ((count_1 / 2) == count_2)
			{
				DPRINTF("\n record number %d", count_2 + 1);
				DPRINTF("\n \tID: %d", pCurrentStudent->Student.ID);
				DPRINTF("\n \tName: %s", pCurrentStudent->Student.name);
				DPRINTF("\n \tHeigth: %f", pCurrentStudent->Student.height);
				break;
			}
			pCurrentStudent= pCurrentStudent->PNextStudent;
			count_2++;
		}

	}
}

void main()
{
	char temp_text[40];

	while(1)
	{
		DPRINTF("\n =============");
		DPRINTF("\n\t Choose one of the following options \n");
		DPRINTF("\n 1: Add_Student ");
		DPRINTF("\n 2: Delete_Student ");
		DPRINTF("\n 3: View_students ");
		DPRINTF("\n 4: Delete_All ");
		DPRINTF("\n 5: Data for student based on index");
		DPRINTF("\n 6: Length of the list");
		DPRINTF("\n 7: Middle of the list");
		DPRINTF("\n Enter Option Number: ");

		gets(temp_text);
		DPRINTF("\n =============");
		switch(atoi(temp_text))
		{
		case 1: Add_Student(); break;
		case 2: delete_student();break;
		case 3: view_Students(); break;
		case 4: DeleteAll();break;
		case 5: GetNth();break;
		case 6: Get_Length_of_list();break;
		case 7: Middle_of_list();break;
		default: DPRINTF("\n Wrong option");break;
		}


	}
}




