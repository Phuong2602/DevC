#include<stdio.h>
#include<string.h>

int main()
{
	char name [5][30];
	int i;
	
    printf("\nPlease enter name ");

	for(i = 0; i < 5; i++ ) 
	{
		printf("\n Enter name %d:",i+1);
		gets(name[i]);
    }
		
	for(i = 0; i < 5; i++)
	{
		printf("\n%s",name[i]);
	}

	return 0;
}
