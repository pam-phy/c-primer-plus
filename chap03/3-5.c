#include <stdio.h>

int main(void)
{

	float age_year, age_second;

	printf("Enter your age in years: ");
	scanf("%f", &age_year);
	printf("Your age in seconds is %e.\n", age_year * 3.156E7);

	return 0;

}
