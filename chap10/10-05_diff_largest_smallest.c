#include <stdio.h>
#define SIZE 5

double diff(double ptr[], int n);

int main(void)
{
	int i;
	double input[SIZE];

	printf("Please enter %d floating-point numbers: ", SIZE);
	for (i = 0; i < SIZE; i++)
		scanf("%lf", &input[i]);
	printf("Here are the numbers entered:\n");
	for (i = 0; i < SIZE; i++)
		printf("%10.2f", input[i]);
	printf("\nThe difference between the biggest and smallest element is %.2f\n", diff(input, SIZE));

	return 0;
}

double diff(double ptr[], int n)
{
	int i;
	double max, min;

	max = min = ptr[0];
	for (i = 0; i < n; i++)
	{
		if (max < ptr[i])
			max = ptr[i];
		if (min > ptr[i])
			min = ptr[i];
	}

	return max - min;
}
