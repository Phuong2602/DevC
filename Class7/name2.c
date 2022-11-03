#include<stdio.h>
#include<string.h>

int main()
{
	int i,j;
	char names[5][30];
	char temp[30];
	
	for( i = 0; i < 5; i++)
	{
		printf("\nEnter name:");
		gets(names[i]);
	}
	
	for( i = 0; i < 5; i++)
	{
		printf("\n %s ", names[i]);
	}
	// sorting
	for( i = 0; i < 4; i++)
	{
		for( j = i + 1; j < 5; j++)
		{
			if( strcmp(names[i], names[j]) > 0)
			{ 
				strcpy(temp, names[i]);
				strcpy(names[i], names[j]);
				strcpy(names[j], temp);
			}
		}
	}
	printf("\nSorted names\n");
	for(i = 0; i < 5; i++)
	{
		printf("\n %s ", names[i]);
	}
	
	return 0;
}
