/* addemup2.c -- five kinds of statements */
#include<stdio.h>

int main(void)
{
	int count, sum, num;

	count = 0;
	sum = 0;
	printf("Enter a number(<= 0 to quit): ");
	scanf("%d", &num);
	while (count++ < num)
		sum = sum + count;
	printf("sum = %d\n", sum);

	return 0;
}
