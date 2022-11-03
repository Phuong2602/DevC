#include <stdio.h>

void change(int n)
{
	n = n + 2;
}

void changeRef(int *pn)
{
	*pn = *pn + 2;
}

int main()
{
	int test = 10;
	changeRef(&test);
	
	printf("\nNumber = %d", test);
	
	return 0;
}
