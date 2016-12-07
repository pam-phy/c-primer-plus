#include<stdio.h>

int main(void)
{
	float speed, size;

	printf("Enter the download speed in Mbs and size of the file in MB.\n");
	scanf("%f %f", &speed, &size);
	printf("At %.2f megabits per second, a file of %.2f megabytes\n", speed, size);
	printf("download in %.2f seconds.\n", 8 * size / speed);

	return 0;
}
