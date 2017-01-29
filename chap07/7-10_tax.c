#include <stdio.h>
#define BREAK1 17850.0
#define BREAK2 23900.0
#define BREAK3 29750.0
#define BREAK4 14875.0
#define RATE1 0.15
#define RATE2 0.28

int main(void)
{
	float BREAK, BASE;
	float income, tax;
	int choice;

	printf("Choose a category:\n");
	printf("1) Single\n");
	printf("2) Head of Household\n");
	printf("3) Married, Joint\n");
	printf("4) Married, Separate\n");
	while (scanf("%d", &choice) == 1)
	{
		if (choice < 1 || choice > 4)
		{
			printf("Please enter an integer between 1 and 4:\n");
			continue;
		}
		else
		{
			switch(choice)
			{
				case 1:	BREAK = BREAK1;
						break;
				case 2:	BREAK = BREAK2;
						break;
				case 3:	BREAK = BREAK3;
						break;
				case 4:	BREAK = BREAK4;
						break;
			}
			BASE = BREAK * RATE1;
			printf("Please enter your income:\n");
			scanf("%f", &income);
			if (income <= BREAK)
				tax = income * RATE1;
			else
				tax = BASE + (income - BREAK) * RATE2;
			printf("Tax: %.2f\n", tax);
			printf("Enter another tax cases (q to quit):\n");
		}
	}

	return 0;
}
