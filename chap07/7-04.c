#include <stdio.h>

int main(void)
{
	int count = 0;
	char ch;

	printf("Enter a list of text.\n");
	while ((ch = getchar()) != '#')
	{
		if (ch == '.')
		{
			printf("%c", '!');
			count++;
		}
		else if (ch == '!')
		{
			printf("%c%c", '!', '!');
			count++;
		}
		else
			printf("%c", ch);
	}
	printf("\nNumber of substitution: %d\n", count);

	return 0;
}
