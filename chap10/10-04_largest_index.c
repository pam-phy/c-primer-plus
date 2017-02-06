#include <stdio.h>
#define SIZE 5

int max_index(double ptr[], int n);

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
	printf("\nThe index of the biggest number is %d\n", max_index(input, SIZE));

	return 0;
}

int max_index(double ptr[], int n)
{
	int i, index;
	double max;

	index = 0;
	max = ptr[0];
	for (i = 0; i < n; i++)
		if (max < ptr[i])
		{
			max = ptr[i];
			index = i;
		}

	return index;
}
