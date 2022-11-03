#include<stdio.h>
#include<string.h>

int main()
{
	char names[5][30];
	char find[30];
	int index = 0;
	int temp[30];
	int i = 0;
	
	for(i = 0; i < 5; i++)
	{
		printf("Enter your name : ");
		gets(names[i]);
	}
	// find
	for( i = 0; i < 5; i++ )
	{
		printf("\n %s ",names[i]);
	}
	
	printf("\n Enter name you want to find: ");
	gets( find );
	
	for( i = 0; i < 5; i++)
	{
		if(strcmp(names[i], find) == 0)
		{
			index = i;
			break;
		}
	}
	
	if(index > -1)
	{
		printf(" \nFound at %d  %s ", index + 1 ,find );
	}
	
	else
	{
		printf("\nNot Found");
	}
	
	return 0;
}
