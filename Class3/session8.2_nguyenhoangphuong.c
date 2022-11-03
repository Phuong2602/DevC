#include<stdio.h>

int main()
{
	char input ='a,b,c,d,f,p,v,A,B,C,D,F,P,V';
	begin:
	printf("\nEnter char:");
	scanf("%c",&input);
	
	switch(input)
	{
		case 'a':
		case 'A':
			printf("\n Ada");
			break;
		case 'b':
		case 'B':
			printf("\n Basic");
			break;
		case 'C':
		case 'c':
			printf("\n COBOL");
			break;
		case 'd':
		case 'D':
			printf("\n dBASE III");
			break;
		case 'f':
		case 'F':
			printf("\n Fortran");
			break;
		case 'P':
		case 'p':
			printf("\n Pascal");
			break;
		case 'v':
		case 'V':
			printf("\n Visual C++ ");
			break;
		default:
			{
				printf("Please enter a,b,c,d,f,p,v,A,B,C,D,F,P,V");
				goto begin;
				
			}
		break;

	}
	return 0;
}
