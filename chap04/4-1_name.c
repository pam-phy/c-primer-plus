#include<stdio.h>

int main(void)
{
	char first_name[30], last_name[30];

	printf("What's your first name?\n");
	scanf("%s", first_name);
	printf("What's your last name?\n");
	scanf("%s", last_name);
	printf("Your name is %s %s.\n", last_name, first_name);

	return 0;
}
