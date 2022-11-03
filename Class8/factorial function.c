#include<stdio.h>
#include<math.h>

void Factorial()
{
	int i = 0;
	int number = 0;
	int fac = 1;
	
	printf("\nEnter number to fac:");
	scanf("%d",&number);
	
	for( i = number; i >= 1; i--)
	{
		fac*= i;
	}
	printf("\n Factorial = %d",fac);
}


int main()
{
	Factorial();
	
	return 0;
}
