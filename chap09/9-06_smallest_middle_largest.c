#include <stdio.h>

void order(double * x1, double * x2, double * x3);

int main(void)
{
	double n1, n2, n3;

	printf("Enter three floating-point numbers: ");
	while (scanf("%lf %lf %lf", &n1, &n2, &n3) == 3)
	{
		printf("Originally n1 = %.2f, n2 = %.2f and n3 = %.2f.\n", n1, n2, n3);
		order(&n1, &n2, &n3);
		printf("       Now n1 = %.2f, n2 = %.2f and n3 = %.2f.\n", n1, n2, n3);
		printf("Enter another three floating-point numbers (q to quit): ");
	}

	return 0;
}

void order(double * x1, double * x2, double * x3)
{
	double smallest, middle, biggest;

	if (*x1 < *x2)
	{
		if (*x2 < *x3)
		{
			smallest = *x1;
			middle = *x2;
			biggest = *x3;
		}
		else
		{
			smallest = (*x1 < *x3) ? *x1 : *x3;
			middle = (*x1 > *x3) ? *x1 : *x3;
			biggest = *x2;
		}
	}
	else
	{
		if (*x2 > *x3)
		{
			smallest = *x3;
			middle = *x2;
			biggest = *x1;
		}
		else
		{
			smallest = *x2;
			middle = (*x1 < *x3) ? *x1 : *x3;
			biggest = (*x1 > *x3) ? *x1 : *x3;
		}
	}

	*x1 = smallest;
	*x2 = middle;
	*x3 = biggest;
}
