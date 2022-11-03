#include <stdio.h>
#include <string.h>

struct Student 
{
	int id; 
	char name[30];
	char email[30];
};

struct Student students[10];
int index = -1;

void inputStudent()
{
	index++;
	
	printf("\nEnter id: ");
	scanf("%d", &students[index].id);	

	printf("\nEnter name: ");
	fflush(stdin);
	gets(students[index].name);
	
	printf("\nEnter email: ");
	fflush(stdin);
	gets(students[index].email);
}

void print1Student(struct Student stu)
{
	//printf Student
	printf("\n====== Student info =========");
	printf("\nId %d", stu.id);
	printf("\nName %s", stu.name);
	printf("\nEmail %s", stu.email);
}

void printfStudents()
{
	int i;
	for(i = 0 ; i <= index; i++)
	{
		print1Student( students[i] );
	}
}

int findByName(char name[30])
{
	int i;
	for(i = 0; i <= index; i++)
	{
		if(strcmp(name, students[i].name) == 0) 
		{
			return i;
		}
	}
	return -1;
}


void sortNames()
{
	int i, j;
	struct Student temp;
	
	for(i = 0; i < index; i++)
	{
		for(j = i + 1; j < index; j++)
		{
			if( strcmp(students[i].name, students[j].name ) > 0)
			{
				temp = students[i];
				students[i] = students[j];
				students[j] = temp;
			}
		}
	}
	
	printf("\nSorted names");
	printfStudents();
}

int main()
{
	int choose = 0;
	int i, j;
	char nameToFind[30];
	int found = -1;
	
	do {
		printf("\n1. Add new Student");
		printf("\n2. Find a Student by name");
		printf("\n3. Sort Student by name");
		printf("\n4. List all Students");
		printf("\n5. Exit");
		
		printf("\nChoose a menu: ");
		scanf("%d", &choose);
		
		switch(choose)
		{
			case 1:
				{
					inputStudent( );
				}
				break;
			case 2:
				{
					printf("\nEnter a name to find: ");
					fflush(stdin);
					gets(nameToFind);
					
					found = findByName( nameToFind );
					if(found > -1)
					{
						printf("\nFound student");
						print1Student( students[found] );
					}
					else
					{
						printf("\nNot found");
					}
				}
				break;
			case 3:
				{
					sortNames();
				}
				break;
			case 4:
				{
					printfStudents();
				}
				break;
			case 5:
				printf("\nThank you!!!");
				return 0;
				break;
			default:
				printf("\n");
				break;
		}
		
	} while(1);
	
	return 0;
}
