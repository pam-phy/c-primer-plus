#include<stdio.h>

int main(void)
{
	char ch[26];
	int i;

	for (i = 0; i < 26; i++)
	{
		ch[i] = 'a' + i;
		printf("%c ", ch[i]);
	}
	printf("\n");

	return 0;
}
