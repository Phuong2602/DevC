#include<stdio.h>

void numberArrayDuplicate()
{
	int number[5];
	int i;
	int j;
	int k;
	int total;
	
	printf("\nEnter total size:");
	scanf("%d",&total);
	
	for(i = 0; i < total; i++)
	{
	printf("\nEnter nunber:",i+1);
	scanf("%d",&number[i]);
    }   
    
    for(i = 0; i < total; i++)
	{
		printf(" %d ", number[i]);
	}

	for( i = 0; i < total; i++)
	{
		for( j = i + 1; j < total; j++)
		{
			if(number[i] == number[j])
			{
				for(k = j; k < total; k++)
				{
					number[k] = number[k + 1];
				}
				total--;
				j--;
			}
		}
	}
	printf("\nArray number after duplicate:");
	for( i = 0; i < total; i++)
	{
		printf("\n%d",number[i]);
	}
}

int main()
{
	numberArrayDuplicate();
	
	return 0;
}
