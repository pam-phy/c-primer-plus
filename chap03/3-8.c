#include <stdio.h>

int main(void)
{

	float pint, cup, ounce, tablespoon, teaspoon;

	printf("Enter a volume in cups: ");
	scanf("%f", &cup);

	pint = cup / 2;
	ounce = cup * 8;
	tablespoon  = ounce * 2;
	teaspoon = tablespoon * 3;

	printf("The volume is equivalent to %f pints, or %f ounces, or %f tablespoons, or %f teaspoons.\n", pint, ounce, tablespoon, teaspoon);

	return 0;
}
