#include <stdio.h>

double power(double n, int p);

int main(void)
{
	double x, xpow;
	int exp;

	printf("Enter a number and the integer power");
	printf("to which\nthe number will be raised. Enter q");
	printf("to quit.\n");
	while (scanf("%lf%d", &x, &exp) == 2)
	{
		xpow = power(x, exp);
		printf("%.3g to power %d is %.5g\n", x, exp, xpow);
		printf("Enter next pair of numbers or q to quit.\n");
	}
	printf("Hope you enjoyed this trip -- bye!\n");

	return 0;
}

double power(double n, int p)
{
	double pow = 1;
	int i;

	if (0 == n)
	{
		if (0 == p)
		{
			printf("Error: 0 to 0 is undefined. through, here we will use 1.\n");
			pow = 1;
		}
		else
			pow = 0;
	}
	else
	{
		if (0 == p)
			pow = 1;

		else
		{
			for (i = 1; i <= ((p > 0) ? p : -p); i++)
				pow *= ((p > 0) ? n : 1 / n);
		}
/*
		else if (p > 0)
		{
			for (i = 1; i <= p; i++)
				pow *= n;
		}
		else
		{
			for (i = 1; i <= -p; i++)
				pow *= 1 / n;
		}
*/
	}		

	return pow;
}
