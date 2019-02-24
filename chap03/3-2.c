#include <stdio.h>

int main(void)
{

	int num;

	printf("Please enter an ASCII code(number): ");
	scanf("%d", &num);
	printf("The character for %d is %c.\n", num, num);

	return 0;

}
