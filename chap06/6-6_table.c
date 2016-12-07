#include<stdio.h>

int main(void)
{
	int lower, upper;
	int num, square, cube;

	printf("Enter the lower limit for the table:");
	scanf("%d", &lower);
	printf("Enter the upper limit for the table:");
	scanf("%d", &upper);

	while (lower > upper)
	{
		printf("Error! The lower limit should not be lager than the upper limit!\n");
		return 0;
	}

	printf("   num square   cube\n");
	for (num = lower; num <= upper; num++)
	{
		square = num * num;
		cube = num * num * num;
		printf ("%6d %6d %6d\n", num, square, cube);
	}

	return 0;
}
