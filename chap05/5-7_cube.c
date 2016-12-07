#include<stdio.h>

float cube(float n);

int main(void)
{
	float num;

	printf("Please enter a number: ");
	scanf("%f", &num);
	printf("num * num * num = %.1f\n", cube(num));

	return 0;
}

float cube(float n)
{
	return n * n * n;
}
