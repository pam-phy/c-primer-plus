#include <stdio.h>

int main(void)
{

	float water_number, water_quarts;

	printf("Enter an amount of water in quarts: ");
	scanf("%f", &water_quarts);
	printf("The number of water molecules is %e\n",  water_quarts * 950 / 3.0E-23);

	return 0;
}
