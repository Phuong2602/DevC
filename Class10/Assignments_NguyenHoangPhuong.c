#include <stdio.h>
#include <string.h>

struct Book
{
	int  id_book;
	int  price;
	char name[50];
	char genre[20];
	char author[20];
};

struct Book books[100];
int index = -1;

void inputBook()
{
	index++;
	
	printf("\nEnter id book:");
	scanf("%d", &books[index].id_book);
	
	printf("\nEnter price book:");
	scanf("%d", &books[index].price);
	
	printf("\nEnter name book:");
	fflush(stdin);
	gets(books[index].name);
	
	printf("\nEnter name genre:");
	fflush(stdin);
	gets(books[index].genre);
	
	printf("\nEnter name author:");
	fflush(stdin);
	gets(books[index].author);
}


void print1Book(struct Book books)
{
	printf("\n====== Book info =========");
	printf("\nId %d", books.id_book);
	printf("\nPrice %d",books.price);
	printf("\nName %s", books.name);
	printf("\nGenre %s", books.genre);
	printf("\nAuthor %s", books.author);
	printf("\n");
}

void printfBook()
{
	int i;
	for(i = 0 ; i <= index; i++)
	{
		print1Book( books[i] );
	}
}
int findByName(char name[50])
{
	int i;
	for(i = 0; i <= index; i++)
	{
		if(strcmp(name, books[i].name) == 0) 
		{
			return i;
		}
	}
	return -1;
}

void sortBook()
{
	int i;
	int j;
	struct Book temp;
	
	for(i = 0; i < index; i++)
	{
		for( j = 0; j < index - i; j++ )
		{
			if(strcmp(books[j].name , books[j+1].name) > 0)
			{
				temp = books[j];
				books[j] = books[j+1];
				books[j+1] = temp;
			}
		}
	}
	printf("\nSorted Book");
	printfBook();
}

	
int main()
{
	int choose = 0;
	int i, j;
	char nameToFind[50];
	char priceToFind[50];
	int found = -1;
	
	do{
		printf("\n1.Add a new book:");
		printf("\n2.Find book:");
		printf("\n3.Sort book:");
		printf("\n4.List all book:");
		printf("\n5.Change price:");
		printf("\n6.Exit");
		
		printf("\nChoose a menu:");
		scanf("%d",&choose);
		
		switch(choose)
		{
			case 1:
				{
					inputBook();
				}
			break;
			
		    case 2:
		    	{
				    printf("\nEnter a name to find: ");
					fflush(stdin);
					gets(nameToFind);
					
					found = findByName( nameToFind );
					if(found > -1)
					{
						printf("\nFound book");
						print1Book( books[found]);
					}
					else
					{
						printf("\nNot found");
					}
			    }	
			break;
			
			case 3:
				{
					sortBook();
				}
			break;
			
			case 4:
				{
					printf("\n");
					printfBook();
				}
			break;
			
			case 5:
				{
					printf("\nEnter name of books: ");
					fflush(stdin);
					gets(nameToFind);
					int newPrice;
					found = findByName( nameToFind );
					if (found > -1)
					{
						printf("\nEnter new price : ");
						scanf ("%d", &newPrice);
						books[found].price = newPrice;
					}
				}
			break;
		
			case 6:
					printf("\nThank you");
					return 0;
			break;
			
			default:
				printf("\n");
				break;
		}
	}while(1);
	
	return 0;
}
