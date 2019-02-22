#include <stdio.h>

int main(void)
{
	int age_years, age_days;

	age_years = 20;
	age_days = 365 * age_years;
	printf("My age is %d years, or %d days.\n", age_years, age_days);

	return 0;
}
