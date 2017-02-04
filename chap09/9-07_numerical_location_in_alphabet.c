#include <stdio.h>
#include <ctype.h>

int num_locat(char ch);

int main(void)
{
	char ch;

	printf("Enter a list of characters:\n");
	while ((ch = getchar()) != EOF)
	{
		if (isalpha(ch))
			printf("The numerical location of %c is %2d.\n", ch, num_locat(ch));
		else
			printf("%c isn't a letter.\n", ch);
	}
	printf("Bye.\n");

	return 0;
}

int num_locat(char ch)
{
	return (tolower(ch) - 'a' + 1);
}
