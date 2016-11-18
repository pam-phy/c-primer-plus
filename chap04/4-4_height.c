#include<stdio.h>

int main(void)
{

	float height;
	char name[30];

	printf("Enter your name and height in inches.\n");
	scanf("%s %f", name, &height);
	printf("%s, you are %0.3f feet tall\n", name, height / 12);

	return 0;
}
