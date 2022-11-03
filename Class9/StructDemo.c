#include <stdio.h>

struct Student 
{
	int id; 
	char name[30];
	char email[30];
};

//void inputStudent(struct Student stu)
//{
//	printf("\nEnter id: ");
//	scanf("%d", &stu.id);	
//
//	printf("\nEnter name: ");
//	fflush(stdin);
//	gets(stu.name);
//	
//	printf("\nEnter email: ");
//	fflush(stdin);
//	gets(stu.email);
//}
//
void inputStudentRef(struct Student * pS)
{
	printf("\nEnter id: ");
	scanf("%d", &pS->id);//	 -> access to member of structure pointer

	printf("\nEnter name: ");
	fflush(stdin);
	gets(pS->name);
	
	printf("\nEnter email: ");
	fflush(stdin);
	gets(pS->email);
}

//void printStudent(struct Student stu)
//{
//	//printf Student
//	printf("\n====== Student info =========");
//	printf("\nId %d", stu.id);
//	printf("\nName %s", stu.name);
//	printf("\nEmail %s", stu.email);
//}

void printStudentRef(struct Student * pS)
{
	//printf Student
	printf("\n====== Student info =========");
	printf("\nId %d", pS->id);
	printf("\nName %s", pS->name);
	printf("\nEmail %s", pS->email);
}

int main()
{
	struct Student student;
	
	inputStudentRef(&student);
	
	printStudentRef(&student);
	
	return 0;
}
