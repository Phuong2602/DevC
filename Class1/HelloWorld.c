#include <stdio.h> 
#include <math.h> 

//Standard Input output
//F9 to compile
//F10 to run

int main()
{
	int a, b, c;
	int delta;
	
	//delta = b*b - 4*a*c;
	//sqrt(delta);
	//x = -b / (2*a);
	
	a = 1;
	b = 10;
	c = 70;
	
	if( a > b)
	{
		if( a > c)
		{
			printf("A = %d is maximum number", a);
		}
		else
		{
			printf("C = %d is maximum number", c);
		}
	}
	else
	{
		if( b > c)
		{
			printf("B = %d is maximum number", b);
		}
		else
		{
			printf("C = %d is maximum number", c);
		}
	}
	
	return 1;
}
