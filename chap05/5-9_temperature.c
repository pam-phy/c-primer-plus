#include<stdio.h>

double Temperature(double fah);

int main(void)
{
	double fah, kel;
	int val;

	printf("Please enter a temperature in Fahrenheit: ");
	val = scanf("%lf", &fah);
	
	while (val == 1)
	{
		kel = Temperature(fah);
		printf("Enter another temperature in Celsius (q or nonnumeric value to quit): ");
		val = scanf("%lf", &fah);
	}

	return 0;
}

double Temperature(double fah)
{
	const double ABS = 273.16;
	const double REL = 32.0;
	const double FRA = 5.0 / 9.0;

	double cel, kel;

	cel = FRA * (fah - REL);
	kel = cel + ABS;
	printf("%.2f F = %.2f C = %.2f K\n", fah, cel, kel);
}
