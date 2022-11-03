#include<stdio.h>
#include<string.h>

int main()
{
	char name[30];
	int i;
	int totalvowel = 0;
	int totalconsonants = 0;
	
	printf("\n Enter your name:");
	gets(name);
	
	printf("Hello %s,length of your name %d", name, strlen(name));
	
	for(i = 0; i < strlen(name); i++)
	{
		printf("\n%c", name[i]);
		
	   switch(name[i])
	   {
	case 'a':
	case 'i':
	case 'e':
	case 'o':
	case 'u':
		totalvowel++;
		break;
	default:
		totalconsonants++;
		break;

	   }
	}
	
	printf("\ntotalvowel = %d",totalvowel);
	printf("\ntotalconsonants = %d",totalconsonants);
	
	return 0;
	
	
}
