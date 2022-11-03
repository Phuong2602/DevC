#include<stdio.h>
// display top 3 scores

struct Students
{
	int scores;
	char names[5][30];
};

struct Students student[30];
int indexx = -1;

void InputStudents(int i)
{
	printf("\nEnter your name:");
	fflush(stdin);
	gets(student[i].names);
	
	printf("\nEnter scores:");
	scanf("%d",&student[i].scores);
}


void PrintfStudents(struct Students student)
{
	printf("\n====== Students info =========");
	printf("\nScore top 1: %d",student.scores);
	printf("\nScore top 2: %d",student.scores);
	printf("\nScore top 3: %d",student.scores);
	
	
}


int main()
{
	indexx++;
	InputStudents( indexx );
	
	indexx++;
	InputStudents( indexx );
	
	indexx++;
	InputStudents( indexx );
	
	indexx++;
	InputStudents( indexx );
	
	indexx++;
	InputStudents( indexx );
	
	PrintfStudents();
	
	return 0;
}


