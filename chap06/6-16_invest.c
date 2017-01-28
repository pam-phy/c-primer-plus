#include <stdio.h>

int main(void)
{
	float invest_da, invest_de;
	int i;

	for (i = 0, invest_da = invest_de = 100; invest_da >= invest_de; i++)
	{
		invest_da += 10;
		invest_de *= 1.05;
		printf("%3d:  %f  %f\n", i + 1, invest_da, invest_de);
	}
	printf("After %d years, the value of Deirdre's investment exceeds the Daphne's.\n", i);
	printf("The value of Daphne's investment is: %f\n", invest_da);
	printf("The value of Deirdre's investment is: %f\n", invest_de);

	return 0;
}
