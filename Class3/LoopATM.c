#include <stdio.h>

int main ()
{
 	int choose = 0;
	char answer = 'y';
	
	do 
	{
		printf("\n1. Please withdraw money");
		printf("\n2. Please transfer money");
		printf("\n3. Please deposit money");
		printf("\n4. Exit");

		printf("\nPlease choose a menu: ");
		scanf("%d", &choose);
		
		switch(choose)
		{
			case 1:
				printf("\nPlease withdraw money");
				break;
			case 2:
				printf("\nPlease transfer money");
				break;
			case 3:
				printf("\nPlease deposit money");
				break;	
			case 4:
				printf("\nThank you");
				return 0;
				break;	 // need 	
			default:
				printf("\nWrong menu");
				break;
		}
	
	} while(1);
	 
		
//	printf("\nDo you want to exit application: ");
//	answer = getch();
//	
//	if( answer == 'y' || answer == 'Y' )
//	{
//		printf("\nThank you");
//		return 0;
//	}
//	else
//	{
//		goto begin;
//	}
	
	return 0;
}
