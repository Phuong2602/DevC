#include<stdio.h>

int main()
{
	int age=0,i=0;
	char name[10];
	
	
	printf("\n enter your name:");
	gets(name);
	
	
	printf("\nEnter age:");
	scanf("%d",&age);
	
	for(i=0; i<=age;i++)
	{ 
	    
		printf("\n %s",name);
		
	}
	
	
	return 0;
}
