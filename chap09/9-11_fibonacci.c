#include <stdio.h>

unsigned long fact(int n);
unsigned long fibonacci_loop(int n);
unsigned long fibonacci_recur(int n);

int main(void)
{
	int n;

	printf("This program use loop and recursion to calculate the Fibonacci numbers.\n");
	printf("Enter an integer: ");
	while (scanf("%d", &n) == 1)
	{
		printf("Fibonacci: recursion: %lu\n", fibonacci_recur(n));
		printf("                loop: %lu\n", fibonacci_loop(n));
		printf("Enter another integer (q to quit): ");
	}

	return 0;
}

unsigned long fact(int n)
{
	unsigned long ans;

	for (ans  = 1; n > 1; n--)
		ans *= n;

	return ans;
}

unsigned long fibonacci_loop(int n)
{
	int i;
	unsigned long ans = 0;

	for (i = 0; i <= (n - 1) / 2; i++)
		ans += fact(n - i - 1) / (fact(i) * fact(n - 2 * i - 1));

	return ans;
}

unsigned long fibonacci_recur(int n)
{
	if (n > 2)
		return fibonacci_recur(n - 1) + fibonacci_recur(n - 2);
	else
		return 1;
}
