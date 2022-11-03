#include<stdio.h>

struct Lengths
{
	int yard;
	int feet;
	int inches;
	
};

int main()
{
	struct Lengths lengths[5];
	int i,j;
    float temp;
    
    for(i = 0; i < 5; i++)
    {
    	printf("\nEnter length %d(yard):",i+1);
    	scanf("%d", &lengths[i].yard);
	}
	
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 5 - i - 1; j++)
		if( lengths[j].yard > lengths[j+1].yard)
		{
			temp = lengths[j].yard;
			lengths[j].yard = lengths[j+1].yard;
			lengths[j+1].yard = temp;
		}
	}
	
	for( i = 0; i < 5; i++)
	{
		lengths[i].inches = lengths[i].yard * 36;
		lengths[i].feet = lengths[i].yard * 3;
	}
	
	for(j = 0; j < 5; j++)
	{
		printf("%d yard = %d feet = %d inches\n",lengths[j].yard,lengths[j].feet,lengths[j].inches);
	}
//	for( i = 0; i < 5; i++)
//	{
//		printf("\nEnter yard number %d:",i+1);
//		scanf("%f",&length[i].yard);
//		printf("\nEnter feet number %d:",i+1);
//		scanf("%f",&length[i].feet);
//		printf("\nEnter inches number %d:",i+1);
//		scanf("%f",&length[i].inches);
//	}
//	
//	for(i = 0; i < 5; i++)
//	{
//		printf("\n-----Length %d details-----\n",i+1);
//		printf("Yard: %f\n",length[i].yard);
//		printf("Feet: %f\n",length[i].feet);
//		printf("Inches: %f\n",length[i].inches);
//		
//	}
	return 0;
}




