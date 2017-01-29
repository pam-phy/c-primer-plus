#include <stdio.h>

int main(void)
{
	char ch;
	int count = 0;

	printf("Enter a list of text end with #:\n");
	while ((ch = getchar()) != '#')
	{
		printf("%c %3d ", ch, ch);
		count++;
		if ((count % 8) == 0)
			printf("\n");
	}
	if ((count % 8) != 0)
		putchar('\n');

	return 0;
}
