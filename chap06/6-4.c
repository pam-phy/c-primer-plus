#include<stdio.h>

int main(void)
{
	int row, col;
	char ch = 'A';

	for (row = 1; row <= 6; row++)
	{
		for (col = 1; col <= row; col++)
		{
			ch += 1;
			printf("%c", ch - 1);
		}
		printf("\n");
	}

	return 0;
}
