#include<stdio.h>

int main(void)
{
	int row, col;
	char ch = 'F';

	for (row = 0; row < 6; row++)
	{
		for (col = 0; col <= row; col++)
		{
			printf("%c", ch - col);
		}
		printf("\n");
	}

	return 0;
}
