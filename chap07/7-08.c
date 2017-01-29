#include <stdio.h>
//#define RATE1 10.00
//#define RATE2 RATE1 * 1.5
#define PAY_TIME 40.0
//#define PAY_BASE RATE1 * PAY_TIME
#define TAX1 0.15
#define TAX2 0.20
#define TAX3 0.25
#define TAX_RATE1 300.0
#define TAX_RATE2 450.0
#define TAX_BASE1 TAX1 * TAX_RATE1
#define TAX_BASE2 TAX_BASE1 + TAX2 * TAX_RATE2

int main(void)
{
	int choice;
	float RATE1, RATE2, PAY_BASE;
	float hour;
	float gross_pay;
	float tax;

	printf("*****************************************************************\n");
	printf("Enter the number corresponding to the desired pay rate or action:\n");
	printf("1) $8.75/hr                         2) $9.33/hr\n");
	printf("3) $10.00/hr                        4) $11.20/hr\n");
	printf("5) quit\n");
	printf("*****************************************************************\n");
	while (scanf("%d", &choice) == 1)
	{
		if (choice == 5)
			break;
		else if (choice > 4 || choice < 1)
		{
			printf("Please enter an integer between 1 and 5: ");
			continue;
		}
		else
		{
			switch(choice)
			{
				case 1:	RATE1 = 8.75;
						break;
				case 2:	RATE1 = 9.33;
						break;
				case 3:	RATE1 = 10.00;
						break;
				case 4:	RATE1 = 11.20;
						break;
			}
			RATE2 = RATE1 * 1.5;
			PAY_BASE = RATE1 * PAY_TIME;
			printf("Enter the hours worked in a week: ");
			scanf("%f", &hour);
			if (hour <= PAY_TIME)
				gross_pay = hour * RATE1;
			else
				gross_pay = PAY_BASE + (hour - PAY_TIME) * RATE2;
			printf(" gross pay: %.2f\n", gross_pay);

			if (gross_pay < TAX_RATE1)
				tax = gross_pay * TAX1;
			else if (gross_pay < TAX_RATE2)
				tax = TAX_BASE1 + (gross_pay - TAX_RATE1) * TAX2;
			else
				tax = TAX_BASE2 + (gross_pay - TAX_RATE2) * TAX3;
			printf(" taxes: %.2f\n net pay: %.2f\n", tax, gross_pay - tax);
			printf("Enter another choice: ");
		}
	}

	return 0;
}
