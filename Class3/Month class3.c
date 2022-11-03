#include<stdio.h>

int main()
{

	int year=0,month=0,day=0;
	begin:
	printf("\nEnter years :");
	scanf("%d",&year);
	
	printf("\nEnter month :");
	scanf("%d",&month);
	

	
	if(year%4==0)
	{
		printf("Leap year");
		printf("\nFebruary has 29 days");
	
	
	}
	else
	{
		printf("Intercalary year");
		printf("\nFebruary has 28 days");
		
	}
	switch (month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("\n Month has 31 days");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("\n Month has 30 days");
			break;
	default :
		
	    break;

	
	}
	return 0;
}
