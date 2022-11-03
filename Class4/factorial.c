#include<stdio.h>

int main()
{
	int i=0,number=1,fac=1;
	printf(" enter number to fac");
	scanf("%d",&number);
	
	for( i=number;i>=1;i--)
	{
	

	fac*=i;
	

    }
    	printf("fac=%d",fac);
	
}
