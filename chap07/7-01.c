#include <stdio.h>

int main(void)
{
	int n_space = 0;
	int n_newline = 0;
	int n_char = 0;
	char ch;

	while ((ch = getchar()) != '#')
	{
		if (ch == ' ')
			n_space++;
		else if (ch == '\n')
			n_newline++;
		else
			n_char++;
	}
	printf("Number of space: %d\n", n_space);
	printf("Number of newline: %d\n", n_newline);
	printf("Number of other characters: %d\n", n_char);

	return 0;
}
