#include<stdio.h>
#define C_PER_I 2.54
#define I_PER_F 12

int main(void)
{
	float cm, inch, left;
	int feet;
	
	printf("Enter a height in cntimeters: ");
	scanf("%f", &cm);
	while (cm > 0)
	{
		inch = cm / C_PER_I;
		feet = (int) inch / I_PER_F;
		left = inch - feet * I_PER_F;
		printf("%.1f cm = %.0f feet, %.1f inches\n", cm, feet, left);
		printf("Enter a height in centimeters (<= 0 to quit): ");
		scanf("%f", &cm);
	}
	printf("bye");

	return 0;
}
	
