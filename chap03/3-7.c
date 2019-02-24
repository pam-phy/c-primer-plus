#include <stdio.h>

int main(void)
{

	float height_cm, height_inch;

	printf("Enter your height in centimeters: ");
	scanf("%f", &height_cm);
	printf("Your height in inchs is %e\n", height_cm / 2.54);

	return 0;
}
