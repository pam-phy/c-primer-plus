#include <stdio.h>
double divide(double n1, double n2);

int main(void)
{
	float num1, num2, num;

	printf("Please enter two non-zero floating-point numbers (q to quit): ");
	while ((scanf("%f%f", &num1, &num2)) == 2)
	{
		if (num1 != 0 && num2 != 0)
		{
			num = divide(num1, num2);
			printf("(%f - %f) / (%f * %f) = %f\n", num1, num2, num1, num2, num);
			printf(" %f - %f\n -------------------- = %f\n %f * %f\n", num1, num2, num, num1, num2);
			printf("Please enter anonther two non-zero floating-point numbers (q to quit): ");
		}
		else
		{
			printf("denominator can't be zero.\n");
			printf("Please enter anonther two non-zero floating-point numbers(q to quit): ");
		}
	}

	return 0;
}

double divide(double n1, double n2)
{
	return (n1 - n2) / (n1 * n2);
}
