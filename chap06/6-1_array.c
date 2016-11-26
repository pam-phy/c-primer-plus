#include<stdio.h>

int main(void)
{
	char ch[26];
	char i = 'A';
	int index = 0;

	for ( ; index < 26; index++)
	{
		ch[index] = i + index;
		printf("%c ", ch[index]);
	}
	printf("\n");

	return 0;
}
