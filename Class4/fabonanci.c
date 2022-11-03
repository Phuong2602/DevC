#include<stdio.h>
#include<math.h>
 //so dung sau = tong 2 so trc 

int main()
{
	
	int number,i, f1 = 0, f2 = 1;
	int NextTerm= f1 + f2;
	
	printf("Enter the number of terms:");
	scanf("%d",&number);
	
    printf("Fibonanci Series:%d, %d,",f1,f2);

	

	for(i = 0; i <= number; i++)
	{
		printf("%d,",NextTerm);
		f1 = f2;
		f2 = NextTerm;
		NextTerm = f1 + f2;
	}

//    int i,c;
//    int a = 0;
//	int b = 0;
//	
//	printf("%d",a);
//	printf("%d",b);
//	
//	do
//	{
//		c = b;
//		b = a + b;
//		c = a;
//		printf("%d",b);
//	}	    
//	while(b <= 1000);
		return 0;
}
