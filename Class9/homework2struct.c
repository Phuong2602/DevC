#include<stdio.h>

struct Employee
{
	int id;
	int date_of_joining;
	char name[30];
	int salary;
};

struct Employee emp[1000];
int index = -1;
void inputData(int i)
{
	int date_of_joining;
	printf("\nEnter id %d:",i+1);
	scanf("%d",&emp[i].id);
	
	printf("\nEnter name %d:",i+1);
	fflush(stdin);
	gets(emp[i].name);
	
	printf("\nEnter your salary %d:",i+1);
	scanf("%d",&emp[i].salary);
	
	printf("\nDate of joining %d:",i+1);
	scanf("%d",&emp[i].date_of_joining);
	
}

void increaseSalary()
{
	int salary;
	
	if( salary <= 2000)
	{
	    printf("\nYour percentage increase is 15%"); 
    } 
	else if(( salary > 2000) && ( salary <= 5000))
	{
		printf("\nYour percentage incease is 10%");
	}
	else
	{
		printf("\nNo increase");
	}
	
}

//void printEmployee
//{
//	
//}


int main()
{
	
	struct Employee emp;
	index++;
	inputData(index);
	
	index++;
	inputData(index);
	
	increaseSalary();
	
	
	
//	printEmplyee();


	
	return 0;
	
}
