// divisors.c -- nested ifs display divisors of a number

#include<stdio.h>
#include<stdbool.h>

int main(void)
{
	unsigned long num;	// number to be checked
	unsigned long div;	// potential divisors
	bool isPrime;		// prime flag

	printf("Please enter an integer for anlysis; ");
	printf("Enter q to quit.\n");
	while (scanf("%lu", &num) == 1)
	{
		for (div = 2, isPrime = 1; (div * div) <= num; div++)
		{
			if (num % div == 0)
			{
				if ((div * div) != num)
				printf("%lu is divisable by %lu and %lu.\n",
					num, div, num / div);
				else
					printf("%lu id divisable by %lu.\n",
						num, div);
				isPrime = false;	// number is not a prime
			}
		}
		if (isPrime)
			printf("%lu is prime.\n", num);
		printf("Please enter another integer for analysis; ");
		printf("Enter q to quit.\n");
	}
	printf("Bye.\n");

	return 0;
}
	
