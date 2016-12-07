#include<stdio.h>

int main(void)
{
	int row, col;
	char ch;

//	printf("Enter a character: ");
//	scanf("%c", &ch);
	for (row = 1; row <= 5; row++)
	{
		for (col = 5; col > row; col-- )
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
