#include <stdio.h>

int main(void)
{
	int num[8];
	int i, j;

	for (i = 0; i < 8; i++)
	{
		num[i] = 1;
		for (j = 0; j <= i; j++)
			num[i] *= 2;
	}

	i = 0;
	do
	{
		printf("%6d", num[i]);
		i += 1;
	} while (i < 8);
	printf("\n");

	return 0;
}
