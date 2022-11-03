#include<stdio.h>
#include<string.h>

int main()
{
	char names[5][100];
	char prefix[2];
	int i;
	int j;
	int temp;
	
	for( i =0; i < 5; i++)
	{
		printf(" Enter name:");
		gets(names[i]);
	}
	for( j = 0; j < 2; j++)
	{
		printf("Enter prefix:");
		scanf("%s",&prefix[j]);
	}
	
	



	return 0;
}
