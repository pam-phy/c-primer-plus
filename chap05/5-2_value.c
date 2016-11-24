#include<stdio.h>

int main(void)
{
	int num, end;

	printf("Please enter a number:\n");
	scanf("%d", &num);
	end = num + 10;
	while (num <= end)
	{
		printf("%d ", num);
		num++;
	}
	printf("\nThat's all!\n");

	return 0;
}
