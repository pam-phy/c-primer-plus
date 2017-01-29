#include <stdio.h>
#define PRICE_A 2.05
#define PRICE_B 1.15
#define PRICE_C 1.09
#define DISCOUNT_RATE	0.05
#define DISCOUNT_BREAK	100.0
#define SHIPPING1	6.50
#define SHIPPING2	14.00
#define SHIPPING_RATE	0.50
#define SHIPPING_BREAK1	5.0
#define SHIPPING_BREAK2	20.0

int main(void)
{
	float a, b, c, abc;
	float a_total, b_total, c_total;
	float charge;
	float discount;
	float shipping;
	float grand_total;

	a_total = b_total = c_total = 0;
	printf("Enter the pounds of antichokes, beets, carrots: ");
	while (scanf("%f %f %f", &a, &b, &c) == 3)
	{
		a_total += a;
		b_total += b;
		c_total += c;
		abc = a + b + c;
		charge = a * PRICE_A + b * PRICE_B + c * PRICE_C;
		discount = 0;
		if (charge > DISCOUNT_BREAK)
			discount = abc * DISCOUNT_RATE;
		if (abc <= SHIPPING_BREAK1)
			shipping = SHIPPING1;
		else if (abc <= SHIPPING_BREAK2)
			shipping = SHIPPING2;
		else
			shipping = SHIPPING2 + SHIPPING_RATE * (abc - SHIPPING_BREAK2);
		grand_total = charge - discount + shipping;

		printf(" cost per pound: %.2f\n", grand_total / abc);
		printf(" pounds ordered: %.2f\n", abc);
		printf(" cost for antichokes: %.2f\n", a * PRICE_A + (-discount + shipping) * a / abc);
		printf("               beets: %.2f\n", b * PRICE_B + (-discount + shipping) * b / abc);
		printf("             carrots: %.2f\n", c * PRICE_C + (-discount + shipping) * c / abc);
		printf(" total cost: %.2f\n", charge);
		printf(" discount: %.2f\n", discount);
		printf(" shipping charge: %.2f\n", shipping);
		printf(" grand total: %.2f\n", grand_total);

		printf("Enter another pounds of antichokes, beets, carrots (q to quit): ");
	}

	return 0;
}
