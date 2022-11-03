#include<stdio.h>

struct employee
{
	int id;
	char names[20];
	
};

int main()
{
	struct employee emp;
	printf("\nEnter id: ");
	scanf("%d",&emp.id);
	
	printf("\nName %s");
	fflush(stdin);
	gets(emp.names);
	
	return 0;

}
// bug fix after
