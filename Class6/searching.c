#include <stdio.h>

int main()
{
	int i, j;
	int numbers[10];
	int find, index = -1;
	
	for(i = 0; i < 10; i++)
	{
		printf("\nNumber [%d] ", i + 1);
		scanf("%d", &numbers[i]);
	}
	
	for (i = 0; i < 10; i ++)
	{
		printf (" %d ", numbers[i]);
	}
	
	printf("\nEnter number to find: ");
	scanf("%d", &find);
	
	for (i = 0; i < 10; i ++)
	{
		if(numbers[i] == find)
		{
			index = i;
			break;
		}
	}
	
	if(index > -1)
		printf("\nFound at %d, number = %d", (index+1), numbers[index]);
	else 
		printf("\nNot found");
	
	return 0;
}

