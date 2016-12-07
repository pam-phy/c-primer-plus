#include<stdio.h>

double Temperature(double n);

int main(void)
{
	double fah, kel;
	int val;

	printf("Please enter a temperature in Fahrenheit: ");
	val = scanf("%f", &fah);
	
	while (val == 1)
	{
		kel = Temperature(fah);
		printf("%.2f F = %.2f K\n", fah, kel);
		printf("Enter another temperature in Celsius (q or nonnumeric value to quit): ");
		val = scanf("%f", &fah);
	}

	return 0;
}

double Temperature(double n)
{
	const double ABS = 273.16;
	const double REL = 32.0;
	const double FRA = 5.0 / 9.0;

	return FRA * ( n - REL ) + ABS;
}
