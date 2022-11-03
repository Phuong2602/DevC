#include<stdio.h>
#include<math.h>

void formulaAreaformulaPerimeter()
{
	float pi = 3.14;
    float Area;
    float r;
    float Perimeter;
    printf("\n Enter your radius:");
    scanf("%f",&r);
    
    Area = pi * r * r;
	printf("\n Area = %.2f",Area);

    float Perimeter;
   
    printf("\n Enter your radius:");
    scanf("%f",&r);
    
    Perimeter = (r * 2) * pi;
	printf("\n Perimeter = %.2f",Perimeter);
}

int main()
{

	formulaArea();
	formulaPerimeter();
	
	return 0;
}
