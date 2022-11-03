#include<stdio.h>

int main()
{
	int i, j ;
	int numbers[5];
	int max;
	
	for(i = 0; i < 5; i++)
	{
		printf("\nNumber [%d]", i + 1);
		scanf("%d", &numbers [i]);
	}
	
	
	for(i = 0; i < 5; i++)
	{
		printf(" %d ", numbers[i]);
	}
	
	max = numbers[0];
	for(i = 1; i < 5; i++)
	{
		if( numbers[i] > max )
		{
			max = numbers[i];
		}
	}
	printf("\nMax number = %d",max);
	return 0;
	
	
}

