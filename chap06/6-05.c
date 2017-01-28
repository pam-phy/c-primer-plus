#include<stdio.h>

int main(void)
{
	int row, col, n;
	char ch;

	printf("Please enter a character: ");
	scanf("%c", &ch);
	n = ch - 'A' + 1;
	for (row = 1; row <= n; row++)
	{
		for (col = n; col > row; col-- )
		{
			printf(" ");
		}
		for (ch = 'A'; ch < 'A' + row; ch++)
		{
			printf("%c", ch);
		}
		for (ch = 'A' + row - 2; ch >= 'A'; ch--)
		{
			printf("%c", ch);
		}
		printf("\n");
	}

	return 0;
}
