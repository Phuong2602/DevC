#include<stdio.h>

int main()

{
	int mark=0;
	
	printf("Enter your mark :");
	scanf(" %d",&mark);
	
	printf("\n Mark=%d",mark);
	
	if((mark>=8)&&(mark<=10))
	{
		printf("\n Your mark is excellent");
	}
	else if((mark>=6)&&(mark<8))
	{
		printf("\n Your mark is credit");
	}
	else if ((mark>=4)&&(mark<6))
	{
		printf("\n Your mark is pass");
	}
	else
	{
		printf("\nYou failed");
	}
	
	return 0;
}
