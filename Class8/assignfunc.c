#include<stdio.h>
#include<string.h>

char names[100][30];
int choose = 0;
	

void enterName()
{
	    int index = -1;
		printf("\n Enter your name:");
		index++;
    	fflush(stdin);
		gets(names[index]);
}

void findName()
{
	char find[30];
	int i,j, index = -1;
	printf("\nEnter your name you want to find:");
				fflush(stdin);
				gets(find);
				
			for(i = 0; i < index; i++)
			{
					if(strcmp(names[i], find) == 0)
				{
					index = i;
					break;
				}
			}
			if( index > -1)
			{
				printf("\nFound at %d",index+1,find);
}

void sortName()
{
	
	char  temp[30];
	char i,j;
		for( i = 0; i < index; i++)
				{
					for( j = i + 1; j < index + 1; j++)
					{
						if( strcmp(names[i], names[j]) > 0)
						{
							strcpy(temp, names[i]);
							strcpy(names[i] ,names[j]);
							strcpy(names[j] , temp);
							
						}
					}
				}
}

void listName()
{
	for( i = 0; i<= index; i++)
	{
		printf(" %s ",names[i]);
	}
}

void editName()
{
	char change[30];
	printf("\nPlease enter name to edit:");
				fflush(stdin);
				gets(names[index]);
				
				for( i = 0; i < index; i++)
				{
					index = i;
					break;
				}
		
			printf("\nEdit name:");
			gets(change);
			strcpy(names[index], change);
}

int main()
{
	
	
	do
	{
		printf("\n1. Add new name:");
		printf("\n2. Find a name:");
		printf("\n3. Sorting:");
		printf("\n4. List all name:");
		printf("\n5. Edit name:");
		printf("\n6. Exit:");
		
		printf("\n Choose menu: ");
		scanf("%d",&choose);
		
	switch(choose)
	{
		case 1:
			{
			   enterName();
				
			}
		break;
		case 2:
			{
				findName();
	        }
	        break;
			
		case 3:
			{
				sortName();
			}
			break;
		case 4:
			{
			    listName();
			}
			break;
		case 5:
			{
			   editName();
			}
		break;
		case 6:
			{
				printf("\nThank you");
			}
		break;
		default:
			{
				printf("\nWrong menu");
				break;
			}
	}
		
	}while(1);
	
	return 0;
}
