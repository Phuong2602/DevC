#include<stdio.h>
#include<math.h>

int main()
{
	int number=0,total=0,i=0;
	int sum=0;
	char answer='y'
	
	do
	{
	
	
	printf("\n number of elements :");
	scanf("%d",&total);
	
	for(i=0;i<total;i++)
	{
		printf("\n Please enter your number :");
		scanf("%d",&number);
		
		sum+= number ;
	}
	printf("\nTotal=%d",sum);
	
	printf("\nDo you want to continue ?[y/n]");
	answer=getch();
	return 0;
}

