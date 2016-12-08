#include<stdio.h>
double dmin(double x, double y);

int main(void)
{
	printf("The smaller one of 12.3 and 68 is %f.\n", dmin(12.3, 68));

	return 0;
}

double dmin(double x, double y)
{
	double min;

	min = x;
	if (x > y)
		min = y;

	return min;
}
