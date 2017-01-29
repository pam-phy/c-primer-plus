#include <stdio.h>
#define RATE1 10.0
#define RATE2 RATE1 * 1.5
#define PAY_TIME 40.0
#define PAY_BASE RATE1 * PAY_TIME
#define TAX1 0.15
#define TAX2 0.20
#define TAX3 0.25
#define TAX_RATE1 300.0
#define TAX_RATE2 450.0
#define TAX_BASE1 TAX1 * TAX_RATE1
#define TAX_BASE2 TAX_BASE1 + TAX2 * TAX_RATE2

int main(void)
{
	float hour;
	float gross_pay;
	float tax;
//	float net_pay;

	printf("Enter the hours worked a week: ");
	scanf("%f", &hour);
	if (hour <= PAY_TIME)
		gross_pay = hour * RATE1;
	else
		gross_pay = PAY_BASE + (hour - PAY_TIME) * RATE2;
	printf("gross pay: %.2f\n", gross_pay);

	if (gross_pay < TAX_RATE1)
		tax = gross_pay * TAX1;
	else if (gross_pay < TAX_RATE2)
		tax = TAX_BASE1 + (gross_pay - TAX_RATE1) * TAX2;
	else
		tax = TAX_BASE2 + (gross_pay - TAX_RATE2) * TAX3;
	printf("taxes: %.2f\nnet pay: %.2f\n", tax, gross_pay - tax);

	return 0;
}
