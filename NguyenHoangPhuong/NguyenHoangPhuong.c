#include<stdio.h>
#include<string.h>

int main()
{
	int j;
	char input[50];
	int a = 0,i = 0,e = 0,o = 0,u = 0;
	int totalconsonants = 0;
	
	printf("\nEnter input:");
	fflush(stdin);
	gets(input);
	
	printf("\nYour input is : %s",input,strlen(input));
	
	for(j = 0; j < strlen(input); j++)
	{
	   switch(input[i])
	   {
	   	case 'a':
	   	case 'i':
	   	case 'e':
	   	case 'o':
	   	case 'u':

	default:
		totalconsonants++;
		break;
	   }
	}
	printf("\na : %d\n",a);
	printf("i : %d\n",i);
	printf("e : %d\n",e);
	printf("o : %d\n",o);
	printf("u : %d\n",u);
	printf("\ntotalconsonants = %d",totalconsonants);
	
	return 0;
}
