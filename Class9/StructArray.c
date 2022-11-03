#include <stdio.h>

struct Student 
{
	int id; 
	char name[30];
	char email[30];
};

struct Student students[10];
int indexx = -1;

void inputStudent(int i)
{
	printf("\nEnter id: ",i+1);
	scanf("%d", &students[i].id);	

	printf("\nEnter name: ",i+1);
	fflush(stdin);
	gets(students[i].name);
	
	printf("\nEnter email: ",i+1);
	fflush(stdin);
	gets(students[i].email);
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
	for(i = 0 ; i <= indexx; i++)
	{
		print1Student( students[i] );
	}
}

int main()
{
	//input
	indexx++;
	inputStudent( indexx );
	
	indexx++;
	inputStudent( indexx );
	
	printfStudents();
	
	return 0;
}
