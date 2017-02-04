#include <stdio.h>

void chline(char ch, int i, int j);

int main(void)
{
	char ch;
	int start, stop;

	printf("Enter a character and two integers: ");
	
	while ((ch = getchar()) !=  '\n')
	{
		if (scanf("%d %d", &start, &stop) != 2)
			break;
		chline(ch, start, stop);
		while (getchar() != '\n')
			continue;
		printf("Enter another character and two integers;\n");
		printf("Enter a new line to quit.\n");
	}
	printf("Bye.\n");

	return 0;
}

void chline(char ch, int start, int stop)
{
	int index;

	for (index = 1; index < start; index++)
		putchar(' ');
	for ( ; index <= stop; index++)
		putchar(ch);
	printf("\n");
}
