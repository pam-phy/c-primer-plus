#include<stdio.h>
#define D_PER_W 7

int main(void)
{
	int day, week, left;

	printf("Convert days to weeks and days!\n");
	printf("Please enter the number days (<= 0 to quit):\n");
	scanf("%d", &day);

	while (day > 0)
	{
		week = day / D_PER_W;
		left = day % D_PER_W;
		printf("%d days are %d weeks, %d days.\n", day, week, left);
		printf("Enter next value (<= 0 to quit):\n");
		scanf("%d", &day);
	}

	return 0;
}
