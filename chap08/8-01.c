#include <stdio.h>

int main(void)
{
	int count = 0;

	while (getchar() != EOF)
		count++;

	printf("Number of characters: %d\n", count);

	return 0;
}
