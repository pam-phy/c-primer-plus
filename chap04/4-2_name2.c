#include<stdio.h>

int main(void)
{
	char name[30];

	printf("What's your first name?\n");
	scanf("%s", name);
	printf("\"%s\"\n", name);
	printf("\"%20s\"\n", name);
	printf("\"%-20s\"\n", name);
	printf("   %s\n", name);

	return 0;
}
