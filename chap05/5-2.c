#include<stdio.h>

int main(void)
{
	int num;
	int count;

	printf("Please enter a number:\n");
	scanf("%d", &num);

	count = 0;
	while (count++ < 11)
		printf("%d\n", num++);
	printf("That's all!\n");

	return 0;
}
