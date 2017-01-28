#include <stdio.h>
int sgn(int n);

int main(void)
{
	float limit_sum, limit_minus;
	int limit, i;

	printf("Please enter a limit: ");
	scanf("%d", &limit);
	limit_sum = limit_minus = 0;
	for (i = 1; i <= limit; i++)
	{
		limit_sum += 1.0 / i;
		limit_minus += 1.0 * sgn(i - 1) / i;
	}
	printf("Sum[1 / n, n = {1, %d}] = %f\n", limit, limit_sum);
	printf("Sum[(-1)^n / n, n = {1, %d}] = %f\n", limit, limit_minus);

	return 0;
}

int sgn(int n)
{
	int i, num = 1;

	for (i = 0; i < n; i++)
		num *= -1;

	return num;
}
