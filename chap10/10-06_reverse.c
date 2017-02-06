#include <stdio.h>
// #define SIZE 5

void reverse(double ptr[], int n);

int main(void)
{
	int i;
	int SIZE;

	printf("Please enter an integer: ");
	scanf("%d", &SIZE);
	double input[SIZE];

	printf("Please enter %d floating-point numbers: ", SIZE);
	for (i = 0; i < SIZE; i++)
		scanf("%lf", &input[i]);
	printf("Originally the array is:\n");
	for (i = 0; i < SIZE; i++)
		printf("%10.2f", input[i]);
	printf("\n");
	reverse(input, SIZE);
	printf("Now the array is:\n");
	for (i = 0; i < SIZE; i++)
		printf("%10.2f", input[i]);
	printf("\n");

	return 0;
}

void reverse(double ptr[], int n)
{
	int i;
	double temp;

	for (i = 0; i < (n + 1) / 2; i++)
	{
		temp = ptr[i];
		ptr[i] = ptr[n - i - 1];
		ptr[n - i - 1] = temp;
	}
}
