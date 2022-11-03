#include<stdio.h>

struct Student
{
	int id;
	char Name[30];
	char email[100];
	
};

int main()
{
	struct Student stu;
	
	printf("\nEnter id :");
	scanf("%d",&stu.id);
	
	printf("\nEnter Name :");
	fflush(stdin);
	gets(stu.Name);
	
	printf("\nEnter email :");
	gets(stu.email);
	
	// print student
	
	printf("\n========Student Info=========");
	
	printf("\nId %d", stu.id);
	printf("\nName %s", stu.Name);
	printf("\nEmail %s", stu.email);
	
	return 0;
}
