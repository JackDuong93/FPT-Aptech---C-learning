#include <stdio.h>

int que1()
{
	int k;
	
	printf("\nEnter k integer number: ");
	scanf("%d", &k);

	int divisor, count;
	count = 0;
	printf("\nDivisors of k are: ");
	for (int i = 1; i <= k; i++)
	{
		if (k%i==0)
		{
			divisor = i;
			printf(" %d", i);
			if (divisor%2==0)
			{
				count++;
			}
		}
	}
	printf("\nNumber of even divisors: %d\n", count);
}

struct cannedmilk
{
	char label[50];
	int weight;
	float price;
};

void que2()
{
	int num;
	do 
	{
		printf("\nEnter number of canned milk: ");
		scanf("%d", &num);
		fflush(stdin);
		if (num <= 0)
		{
			printf("\nWrong number, please enter again number > 0");
		}
	} while (num <= 0);
	struct cannedmilk milkinfor[num];
	for ( int i = 0; i<num; i++)
	{
		printf("\nInput for canned milk %d: ",i+1);		
		printf("\nLabel: ");
		fgets(milkinfor[i].label, sizeof(milkinfor[i])+1,stdin);
		printf("\nWeight: ");
		scanf("%d", &milkinfor[i].weight);
		fflush(stdin);
		printf("\nPrice: ");
		scanf("%f", &milkinfor[i].price);
		fflush(stdin);
	
	}
	printf("\nCans which have the weight from 100 to 400 in the array: ");
	for (int j = 0; j <num; j++)
	{
		if (milkinfor[j].weight >= 100 && milkinfor[j].weight <= 400)
		{
			printf("\n\nLabel: %s", milkinfor[j].label);	
			printf("Weight: %d", milkinfor[j].weight);
			printf("\nPrice: %.2f\n", milkinfor[j].price);			
		}
		
	}
}
int main()
{
	int choice;
	
	printf("**********************************");
	printf("\n* Select an appropriate action:  *");
	printf("\n*	1. R1 \t \t \t *");
	printf("\n*	2. R2 \t \t \t *");
	printf("\n*	3. R3 \t \t \t *");
	printf("\n**********************************");
	
	do {
		printf("\nPlease enter your choice:");
		scanf("%d", &choice);
		if(choice <=0 || choice > 3)
		{
			printf("\nWrong number, please enter number from 1~3:");
		}
		
		switch(choice)
			{
			case 1:
				que1();
				break;
			case 2:
				que2();
				break;
			case 3:
				printf("Exit program");
				break;
			default:
				break;
			}
	} while (choice!=3);
	

}
