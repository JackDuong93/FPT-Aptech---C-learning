#include <stdio.h>

void fibonan()
{
	int num1, num2, total;
	num1 = 0;
	num2 = 1;
	printf("Enter total number: ");
	scanf("%d", &total);
	
	for (int i = 0; i <= total; i++ )
	{
		
	}
}


int main()
{
	int num;
	
	printf("********************************");
	printf("\n* Selecting approriate action: *");
	printf("\n* 1. Question 1                *");
	printf("\n* 2. Question 2                *");
	printf("\n* 3. Question 3                *");
	printf("\n********************************");
	do
	{
		printf("\nSelect your action: ");
		scanf("%d",&num);
	} while (num<1 || num>3);
	
	switch(num)
	{
		case 1:
			fibonan();
			break;
		case 2:
			break;
		case 3:
			printf("Quit the program");
			break;
		default:
			printf("Your choice is invalid, please enter again");
			break;		
	}

}
