#include<stdio.h>
#include<math.h>

int main()
{
//	int i=0;
//	int j=0;
//	int rows=10;
//		
//	
//	for( i = 0 ; i <= rows; i++)
//	{ 
//		for(j = i; j < rows; j++)
//		{  
//			printf("*");
//		}
//			printf("\n");
//	}

 int i,j;
 int total=5;
 
 for( i = 0; i < total ; i++)
 {
 	for(j = 0; j < total-(i + 1); j++)
	 {
	 	printf("   ");
	 }
 	for(j = 0 ; j <= i; j++)
 	{
 		printf(" * ");
	 }
	 printf("\n");
 }



	  
	    
	return 0;
}
