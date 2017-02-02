#include<stdio.h>
double min(double x, double y);

int main(void)
{
	double x, y;

	printf("Enter two type double values: ");
	while (scanf("%lf %lf", &x, &y) == 2)
		printf("The smaller one of %.2f and %.2f is %.2f.\n", x, y, min(x, y));

	return 0;
}

double min(double x, double y)
{
	return ((x < y) ? x : y);
}
