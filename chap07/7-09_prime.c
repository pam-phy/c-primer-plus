#include <stdio.h>

int main(void)
{
	int num;
	int prime, div;
	_Bool isPrime = 1;
	int count;

	printf("Enter a positive integer: ");
	while (scanf("%d", &num) == 1)
	{
		if (num <= 0)
		{
			printf("We only accept positive integer: ");
			continue;
		}
		else
		{
			count = 0;
			printf("The prime number smaller than or equal to %d:", num);
			for (prime = 2; prime <= num; prime++)
			{
				for (div = 2; (div * div) <= prime; div++)
					if (prime % div == 0)
					{
						isPrime = 0;
						break;
					}
				if (isPrime)
				{
					printf(" %d", prime);
					count++;
				}
				isPrime = 1;
			}
			if (count)
				printf("\n");
			else
				printf(" none!\n");
		}
		printf("Enter another positive integer (q to quit): ");
	}

	return 0;
}
