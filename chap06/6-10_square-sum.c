#include <stdio.h>

int main(void)
{
	int lower, upper;
	int sum, i;

	printf("Enter lower and upper integer limits: ");
	scanf("%d%d", &lower, &upper);
	while (lower < upper)
	{
		sum = 0;
		for (i = lower; i <= upper; i++)
			sum += i * i;
		printf("The sum of the squares from %d to %d is %d\n", lower, upper, sum);
		printf("Enter next set of limits: ");
		scanf("%d%d", &lower, &upper);
	}

	return 0;
}
