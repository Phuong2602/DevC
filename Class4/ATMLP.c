#include<stdio.h>
#include<math.h>

int main()
{
	int choose=0;
	int money =0;
	int i=0;
	char answer  ='y';
	char result   ='n';
	
	printf("\n 1 Withdraw money ");
	printf("\n 2 Transfer money ");
	printf("\n 3 Deposit money ");
	
	printf("\nChoose the part you want from menu ");
	scanf("%d",&choose);
	
	do
	{
	switch(choose)
	{
		case 1:
			printf("\n Please enter your money you want to withdraw:");
			scanf("%d",&money);
		break;
		
		case 2:
			printf("\n Please enter your money you want to transfer:");
			scanf("%d",&money);
		break;
		
		case 3:
			printf("\n Please enter your money you want to transfer:");
			scanf("%d",&money);
		break;
		
		default:
			printf("\n Do you want to exit:");
			answer=answer =getchar();

		break;
		
	}
	  
    }
while(i<4);
    return 0;
}
