#include <stdio.h>

int main(void)
{
	float value;

	printf("Enter a float-point value: ");
	scanf("%f", &value);
	printf("fixed-point value: %f\n", value);
	printf("exponential notation: %e\n", value);
//	printf("p notation: %#x\n", value);

	return 0;

}
