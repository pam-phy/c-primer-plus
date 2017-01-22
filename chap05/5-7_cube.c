#include<stdio.h>

double cube(double num);

int main(void)
{
	double num;

	printf("Please enter a number: ");
	scanf("%lf", &num);
	printf("num * num * num = %.1f\n", cube(num));

	return 0;
}

double cube(double n)
{
	return n * n * n;
}
