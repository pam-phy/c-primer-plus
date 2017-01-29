#include <stdio.h>

int main(void)
{
	char ch, prev = '.';
	int count = 0;

	while ((ch = getchar()) != '#')
	{
		if (prev == 'e' && ch == 'i')
			count++;
		prev = ch;
	}
	printf("Number of times that the sequence 'ei' occured: %d\n", count);

	return 0;
}
