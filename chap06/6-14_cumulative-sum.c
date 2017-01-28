#include <stdio.h>

int main(void)
{
	double input[8], sum[8];
	int i, j;

	printf("Please enter eight numbers: ");
	for (i = 0; i < 8; i++)
	{
		scanf("%lf", &input[i]);
		sum[i] = input[i];
	}
	for (i = 1; i < 8; i++)
		sum[i] += sum[i - 1];
	printf("The elements are:\n");
	for (i = 0; i < 8; i++)
		printf("%10.2f", input[i]);
	printf("\nThe cumulative totals:\n");
	for (i = 0; i < 8; i++)
		printf("%10.2f", sum[i]);
	printf("\n");

	return 0;
}
