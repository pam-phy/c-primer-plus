#include <stdio.h>

int main(void)
{
	int num;
	int sum_even = 0;
	int sum_odd = 0;
	int count_even = 0;
	int count_odd = 0;
	
	printf("Enter a list of numbers, end with 0.\n");
	while (scanf("%d", &num) == 1)
	{
		if (0 == num)
			break;
		else if (num % 2 == 0)
		{
			sum_even += num;
			count_even++;
		}
		else
		{
			sum_odd += num;
			count_odd++;
		}
	}
	if ((count_even + count_odd) == 0)
		printf("No number entered.\n");
	else
	{
		printf("%d even numbers entered, with average value %d.\n", count_even, sum_even / count_even);
		printf("%d odd numbers entered, with average value %d.\n", count_odd, sum_odd / count_odd);
	}

	return 0;
}
