#include<stdio.h>
#define M_PER_H 60

int main(void)
{
	int min, hour, left;
	
	printf("Convert minutes to hours and minutes!\n");
	printf("Enter the number of minutes (<= 0 to quit):\n");
	scanf("%d", &min);
	while (min > 0)
	{
		hour = min / 60;
		left = min % 60;
		printf("%d minutes is %d hours and %d minutes.\n", min, hour, left);
		printf("Enter next value (<= 0 to quit):\n");
		scanf("%d", &min);
	}
	printf("That's all!\n");

	return 0;
}
