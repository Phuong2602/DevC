#include<stdio.h>
#include<string.h>

int main()
{
	int Temps[5][5];
	char cities[5][50];
	int years[5];
	int max, min;
	int i,j,tempsindex;

	for( i = 0; i < 5; i++)
	{
		printf("\nEnter year:");
		scanf("%d",&years[i]);
	} 
	
	for( j = 0; j < 5; j++)
	{
		printf("\nEnter city:");
		scanf("%s",&cities[j]);
	}
	
	printf("\nEnter temp:");
	scanf("%d",&Temps[5]);
	

	printf("\nHigh temp is :%d",max);
	printf("\nLow temp is : %d", min);

	return 0;
}
