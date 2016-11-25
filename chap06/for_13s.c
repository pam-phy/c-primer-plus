#include<stdio.h>

int main(void)
{
	int n;		// count by 13s for 2

	for (n = 2; n < 60; n += 13)
		printf("%d \n", n);

	return 0;
}
