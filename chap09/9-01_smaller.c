#include<stdio.h>
double dmin(double x, double y);

int main(void)
{
	double x, y;

	printf("Please enter two number:");
	scanf("%f%f", &x, &y);
	printf("The smaller one of %f and %f is %f.\n", x, y, dmin(x, y));

	return 0;
}

double dmin(double x, double y)
{
	return (x < y) ? x : y;
}
