#include <stdio.h>
#define COHENSIVE 150

int main(void)
{
	int friends;
	int i;

	printf("week friends\n");
	printf("  0     5\n");
	for (i = 0, friends = 5; friends <= COHENSIVE; i++)
	{
		friends -= (i + 1);
		friends *= 2;
		printf("%3d %5d\n", i + 1, friends);
	}

	return 0;
}
