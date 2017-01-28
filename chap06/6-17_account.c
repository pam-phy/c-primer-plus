#include <stdio.h>

int main(void)
{
	float account = 1000000.0f;
	int i;

	for (i = 0; account > 0; i++)
	{
		account *= 1.08;
		account -= 100000;
		printf("%3d: %f\n", i + 1, account);
	}
	printf("It takes %d years for Chuckie to empty his account.\n", i);

	return 0;
}	
