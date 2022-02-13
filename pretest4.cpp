#include <stdio.h>

void allodd()
{
	int num, oddcount, evencount;
	printf("Enter total number you want:");
	scanf("%d", &num);
	int arr_odd[num];
	oddcount = 0;
	evencount = 0;

	for (int i = 0; i < num; i++)
		{
		printf("\nEnter number %d: ", i+1);
			scanf("%d", &arr_odd[i]);
			if(arr_odd[i]%2==0 && arr_odd[i]!=0)
			{
				evencount++;
			} else if (arr_odd[i]%2!=0 && arr_odd[i]!=0)
			{
				oddcount++;
			}
		}
		printf("\nTotal even number: %d", evencount);
		printf("\nTotal odd number: %d", oddcount);
		if(evencount==0 && oddcount !=0)
		{
			printf("\narray contains all the odd numbers");
		} else if (evencount!=0 && oddcount ==0)
		{
			printf("\narray not contains all the odd numbers");
		} else {
			printf("\narray not contains all the odd numbers");
		}
		
}

struct product 
{
	int prono;
	char proname[50];
	float price;
} proinformation;

void structure()
{
	int num, no, nocheck;
	printf("Enter number of product: ");
	scanf("%d", &num);
	struct product proinformation[num];
	for ( int i = 0; i < num; i++)
	{
		printf("\nEnter information for product %d", i+1);
		printf("\nProduct %d prono is: ", i+1);
		scanf("%d", &proinformation[i].prono);
		printf("\nProduct %d char is: ", i+1);
		scanf("%s", &proinformation[i].proname);
		printf("\nProduct %d price is: ", i+1);
		scanf("%f", &proinformation[i].price);
	}
	do 
	{
		printf("\nEnter prono: ");
		scanf("%d", &no);
		for (int i = 0; i < num; i++)
		{
			if (no==proinformation[i].prono)
			{
				nocheck = proinformation[i].prono;
				printf("\nProduct no is: %d", proinformation[i].prono);
				printf("\nProduct name is: %s", proinformation[i].proname);
				printf("\nProduct price is: %f", proinformation[i].price);
			} 
		}
		if ( no != nocheck)
		{
			printf("Error number, this pro no don't exist, please enter again");
		}

	} while (no!=nocheck);
}



int main()
{
	int num;
	printf("*************************************");
	printf("\n*   Selecting appropriate action:   *");
	printf("\n* 1. Question 1:	            *");
	printf("\n* 2. Question 2:	            *");
	printf("\n* 3. Quit program:	            *");
	printf("\n*************************************");
	
	do 
	{
		printf("\nEnter your selection: ");
		scanf("%d", &num);
		switch(num)
		{
		case 1:
			allodd();
			break;
		case 2:
			structure();
			break;
		case 3:
			printf("Quit program");
			break;
		default:
			break;
		}
		
	} while (num!=3);
}
