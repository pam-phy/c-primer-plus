#include <stdio.h>

void large_of(double * u, double * v);

int main(void)
{
	double x, y;

	printf("Enter two floating-point numbers: ");
	while (scanf("%lf %lf", &x, &y) == 2)
	{
		printf("Originally x = %.2f and y = %.2f.\n", x, y);
		larger_of(&x, &y);
		printf("Now x = %.2f and y = %.2f.\n", x, y);
		printf("Enter two another floating-point numbers (q to quit): ");
	}

	return 0;
}

void larger_of(double * u, double * v)
{
	*u = (*u > *v) ? *u : *v;
	*v = *u;
}
