#include <stdio.h>

int main(void)
{

	float volume_pints, volume_cups, volume_ounces, volume_tablespoons, volume_teaspoons;

	printf("Enter a volume in cups: ");
	scanf("%f", &volume_cups);

	volume_pints = volume_cups / 2;
	volume_ounces = volume_cups * 8;
	volume_tablespoons  = volume_ounces * 2;
	volume_teaspoons = volume_tablespoons * 3;

	printf("The volume is equivalent to %f pints, or %f ounces, or %f tablespoons, or %f teaspoons.\n", volume_pints, volume_ounces, volume_tablespoons, volume_teaspoons);

	return 0;
}
