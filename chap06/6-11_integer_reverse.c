#include <stdio.h>

int main(void)
{
	int num[8];
	int i;

	printf("Please enter eight integers:\n");
	for (i = 0; i < 8; i++)
		scanf("%d", &num[i]);
	printf("Here are the integers:\n");
	for (i = 0; i < 8; i++)
		printf("%6d", num[i]);
	printf("\n");
	printf("and in reverse order:\n");
	for (i = 0; i < 8; i++)
		printf("%6d", num[7 - i]);
	printf("\n");

	return 0;
}
