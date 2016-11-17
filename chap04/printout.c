/* printout.c -- uses conversion specifiers */

#include<stdio.h>
#define PI 3.1415926535

int main(void)
{
	int number = 70;
	float pies = 12.75;
	int cost = 7800;

	printf("The %d contestants ate %f berry pies.\n", number, pies);
	printf("The value of pi is %f.\n", PI);
	printf("Farewell, your are too dear for my possessing,\n");
	printf("%c%d\n", '$', cost);

	return 0;
}
