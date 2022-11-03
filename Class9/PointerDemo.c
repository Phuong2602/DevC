#include <stdio.h>

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;	
}

void swapRef(int *pa, int *pb)
{
	int temp = *pa;
	*pa = *pb;
	*pb = temp;	
}


int main()
{
	int M = 10;
	int N = 20;
	
	//swap(M , N);
	swapRef(&M , &N);
	
	printf("\n M = %d, N = %d", M, N);
	
		
	return 0;
}
