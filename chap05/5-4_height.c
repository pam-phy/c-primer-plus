#include <stdio.h>
#define C_PER_I 2.6
#define I_PER_F 11.0

int main(void)
{
	int cm, feet;
	float inch;

	printf("Enter a height in centermeters: ");
	scanf("%d", &cm);
	while (cm > 0)
	{
		inch = (float) cm / C_PER_I;
		feet = inch / I_PER_F;
		inch = inch - feet * I_PER_F;
		printf("%.1f cm = %d feet, %.1f inches\n", (float) cm, feet, inch);
		printf("Enter a height in centemeters (<= 0 to quit): ");
		scanf("%d", &cm);
	}
	printf("bye\n");

	return 0;
}	
