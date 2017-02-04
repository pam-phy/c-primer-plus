#include <stdio.h>

double harmonic(double n1, double n2);

int main(void)
{
	double n1, n2;

	printf("Enter two non-zero floating-point numbers: ");
	while (scanf("%lf %lf", &n1, &n2) == 2)
	{
		if (n1 != 0 && n2 != 0)
			printf("The harmonic mean of %.2f and %.2f is %.2f\n", n1, n2, harmonic(n1, n2));
		else
			printf("Error: 0 is invalid input for harmonic mean.\n");
		printf("Enter another non-zero two floating-point numbers (q to quit): ");
	}

	return 0;
}

double harmonic(double n1, double n2)
{
	return 2.0 / (1.0 / n1 + 1.0 / n2);
}
