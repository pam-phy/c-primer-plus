#include <stdio.h>

void to_base_n(unsigned long num, unsigned int n);

int main(void)
{
	unsigned long number;
	unsigned int n;

	printf("Enter two integers (q to quit):\n");
	while (scanf("%ld %d", &number, &n) == 2)
	{
		printf("Base %d equivalent: ", n);
		to_base_n(number, n);
		putchar('\n');
		printf("Enter two integers (q to quit):\n");
	}
	printf("Done.\n");

	return 0;
}

void to_base_n(unsigned long num, unsigned int n)		/* recursive function */
{
	int r;

	r = num % n;
	if (num >= n)
		to_base_n(num / n, n);
	printf("%d", r);

	return;
}
