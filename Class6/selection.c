#include<stdio.h>

int main()
{
	int i,j;
	int numbers[5];
	int temp = 0;
	
	for(i = 0; i < 5; i++)
	{
		printf("\n Your numbers [%d] :",i + 1);
		scanf("%d",&numbers[i]);
	}
	
	for( i = 0; i < 5; i++)
	{
		printf(" %d ",numbers[i]);
	}
	
	// selection sort
	for(i = 0; i < 4; i++)
	{
		for(j = i + 1; j < 5; j++)
		{
			if( numbers[i] > numbers[j])
			{
				temp = numbers[i] ;
				numbers[i] = numbers[j];
				numbers[j] = temp;
			}
		}
	}
	
	printf("\n Sorted array");
	
	for( i = 0; i < 5; i++)
	{
		printf(" %d ",numbers[i]);
	}
	return 0;
}
