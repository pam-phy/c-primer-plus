#include <stdio.h>

void chline(char ch, int i, int j);

int main(void)
{
	char ch;
	int row, col;

	printf("Enter a character and two integers: ");
	
	while ((ch = getchar()) !=  '\n')
	{
		if (scanf("%d %d", &row, &col) != 2)
			break;
		chline(ch, row, col);
		while (getchar() != '\n')
			continue;
		printf("Enter another character and two integers;\n");
		printf("Enter a new line to quit.\n");
	}
	printf("Bye.\n");

	return 0;
}

void chline(char ch, int row, int col)
{
	int i, j;

	for (i = 0; i < col; i++)
	{
		for (j = 0; j < row; j++)
			putchar(ch);
		putchar('\n');
	}

	printf("\n");
}
