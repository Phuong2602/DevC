#include<stdio.h>

int main()
{
	int x=0,y=0;
	printf("Enter x:");
	scanf("%d",&x);
	printf("\nEnter y:");
	scanf("%d",&y);
	
	if(x<2000)
	{
		printf("\n x=%d is correct ",x);
	
	}
	else if(x>3000)
	{
		printf("\n x=%d is correct",x);
		
	}
	else
	{
		printf("\n x=%d is incorrect",x);
	}
	
	if((y>=100)&&(y<=500))
	{
		printf("\n y=%d is correct",y);
	}
	else
	{
		printf("\n y=%d is incorrect",y);
	}
	return 0;
}

