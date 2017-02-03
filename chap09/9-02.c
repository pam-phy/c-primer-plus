#include <stdio.h>

void chline(char ch, int i, int j);

int main(void)
{
	char ch;
	int i, j;

	printf("Enter a character and two integers: ");
	while (scanf("%c %d %d", &ch, &i, &j) == 3)
		chline(ch, i, j);

	return 0;
}

void chline(char ch, int i, int j)
{
	int index;

	for (index = 1; index < i; index++)
		putchar(' ');
	for ( ; index <= j; index++)
		putchar(ch);
	printf("\n");
}
