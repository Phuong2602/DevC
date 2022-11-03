#include<stdio.h>
#include<math.h>

int main()
{

	
	float r=0,d=0; // radius,diameter
	float p=0,a=0,pi=3.14;//perimeter,area,pi
	
	printf("\n Please enter your radius : ");

	
	scanf("\n%f",&r);

	
	
	p=r*2*pi;

	printf("\n p=%.2f",p);
	
	

	printf("\n Please enter your diameter: ");
	

	scanf("\n%f",&d);
	a=d*d/4*pi;
	
	
	printf("\n a=%.2f",a);
	
	return 0;
}
