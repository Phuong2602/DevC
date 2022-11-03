#include<stdio.h>

int main()
{
	char names[10][30];
	int i = 0;
	
	for(i = 0; i < 5; i ++)
	{
		printf("\nEnter name: ");
		fflush(stdin);
		gets(names[i]);
	}
	
	for( i = 0; i < 5; i++)
	{
		printf("\nName[%d] = %s",( i + 1), names[i]);
	}
	
}
