#include <stdio.h>

int main ()
{
	int choose = 0;
	char answer = 'y'; 
	
begin: //label	
	printf("\n1. Please withdraw money");
	printf("\n2. Please transfer money");
	printf("\n3. Please deposit money");
	
	printf("\nPlease choose a menu: ");
	scanf("%d", &choose);
	
	switch(choose)
	{
		case 1:
			printf("\nPlease withdraw money");
			goto begin;
			break;
		case 2:
			printf("\nPlease transfer money");
			goto begin;
			break;
		case 3:
			printf("\nPlease deposit money");
			goto begin;
			break;		
		default:
			{
				printf("\nDo you want to exit application: ");
				answer = getch();
				
				if( answer == 'y' || answer == 'Y' )
				{
					printf("\nThank you");
					return 0;
				}
				else
				{
					goto begin;
				}
			}
			break;
	}
	
//	if(choose == 1) 
//	{
//		printf("\nPlease withdraw money");
//	} 
//	else if (choose == 2) 
//	{
//		printf("\nPlease transfer money");
//	}
//	else if (choose == 3) 
//	{
//		printf("\nPlease deposit money");
//	}
//	else
//	{
//		printf("\nDo you want to exit ATM");
//	}
		
	return 0;
}
