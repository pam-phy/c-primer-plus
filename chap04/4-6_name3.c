#include<stdio.h>
#include<string.h>

int main(void)
{
	char first_name[30], last_name[30];
	int length_first, length_last;

	printf("Enter your first name:\n");
	scanf("%s", first_name);
	length_first = strlen(first_name);
	printf("Enter your last name:\n");
	scanf("%s", last_name);
	length_last = strlen(last_name);
	printf("%s %s\n", first_name, last_name);
	printf("%*d %*d\n", length_first, length_first, length_last, length_last);
	printf("%s %s\n", first_name, last_name);
	printf("%-*d %-*d\n", length_first, length_first, length_last, length_last);

	return 0;
}
