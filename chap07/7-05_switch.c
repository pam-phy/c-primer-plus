#include <stdio.h>

int main(void)
{
	int count = 0;
	char ch;

	printf("Enter a list of text.\n");
	while ((ch = getchar()) != '#')
	{
		switch(ch)
		{
			case '.':	printf("%c", '!');
						count++;
						break;
			case '!':	printf("%c%c", '!', '!');
						count++;
						break;
			default:	printf("%c", ch);
		}
	}
	printf("\nNumber of substitution: %d\n", count);

	return 0;
}
