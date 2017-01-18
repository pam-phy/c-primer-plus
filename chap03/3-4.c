#include <stdio.h>

int main(void)
{
1	float value;

	printf("Enter a float-point value: ");
	scanf("%f", &value);
	printf("fixed-point notation: %f\n", value);
	printf("exponential notation: %e\n", value);
	printf("p notation: %a\n", value);

	return 0;

}
