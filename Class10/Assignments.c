#include <stdio.h>
#include <string.h>

//Global variable
int index = -1;
char names[100][30];

void inputName()
{
	printf("\nEnter a name: ");
	index++;
	
	fflush(stdin);
	gets(names[index]);
}

void findName() 
{
	char find[30];
	int i;
	int indexFind = -1;
	
	printf("\nEnter name to find: ");
	fflush(stdin);
	gets( find );
	
	for(i = 0; i <= index; i++)
	{
		if(strcmp(names[i], find) == 0)
		{
			indexFind = i;
			break;
		}
	}
	
	if(indexFind > -1)
	{
		printf("\nFound at %d %s", indexFind + 1, find);
	}
	else
	{
		printf("\nNot found");
	}
}

void printNames()
{
	int i;
	for(i = 0; i <= index; i++)
	{
		printf(" %s ", names[i]);
	}
}

void swap(char a[30], char b[30]) //[] == address
{
	char temp[30];
	
	strcpy(temp, a);
	strcpy(a, b);
	strcpy(b, temp);
}

void sortNames()
{
	int i, j;
	
	
	for(i = 0; i < index; i++)
	{
		for(j = i + 1; j < index + 1; j++)
		{
			if( strcmp(names[i], names[j]) > 0 )
			{
				swap(names[i], names[j]);
			}
		}
	}
	
	printf("\nSorted names");
	printNames();
}


int main()
{
	int choose = 0;
	int i, j;
	
	do {
		printf("\n1. Add new name");
		printf("\n2. Find a name");
		printf("\n3. Sorting");
		printf("\n4. List all names");
		printf("\n5. Exit");
		
		printf("\nChoose a menu: ");
		scanf("%d", &choose);
		
		switch(choose)
		{
			case 1:
				{
					inputName();
				}
				break;
			case 2:
				{
					findName();
				}
				break;
			case 3:
				{
					sortNames();
				}
				break;
			case 4:
				{
					printNames();
				}
				break;
			case 5:
				printf("\nThank you!!!");
				return 0;
				break;
			default:
				printf("\n");
				break;
		}
		
	} while(1);
	
	return 0;
}
