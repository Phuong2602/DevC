#include<stdio.h>

int main()
{
	int i=1,j=0;

	int rows=10;
	
	for(i=1;i<rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	
	return 0;
}
