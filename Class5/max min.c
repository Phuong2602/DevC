#include<stdio.h>
#include<string.h>

int main()
{
	int i;
	int number[5];
	int max;
	int min;
	
	for(i = 0; i < 5; i++)
	{
		printf("\nEnter number [%d]", i + 1);
		scanf("%d",&number[i]);
	}
	max = number[0];
	min = number[0];
	for(i = 0; i < 5; i++)
	{
		if(number [i]> max)
		{
			max = number[i];
		}
	}
	
	for(i = 0; i < 5; i++)
	{
		if(number [i] < min)
		{
			min = number[i];
		}
	}
	printf("\n Max number is : %d ",max);
	printf("\n Min number is : %d", min);
	return 0;
}
