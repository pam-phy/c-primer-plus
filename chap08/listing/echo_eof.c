#include <stdio.h>

int main(void)
{
	int ch;

//	printf("EOF = %d\n", EOF);
	while ((ch = getchar()) != EOF)
		putchar(ch);

	return 0;
}
