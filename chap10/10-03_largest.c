#include<stdio.h>
#define SIZE 5

int imax(int * ptr, int n);

int main(void)
{
	int i;
	int input[SIZE];

	printf("Enter %d integers: ", SIZE);
	for (i = 0; i < SIZE; i++);
		scanf("%d", &input[i]);
	printf("The integers read in are:\n");
	for (i = 0; i < SIZE; i++)
		printf("%10d", input[i]);
	printf("\n");
	printf("The biggest one is %d\n", imax(input, SIZE));

	return 0;
}

int imax(int ptr[], int n)
{
	int i;
	int max;

	max = ptr[0];
	for (i = 0; i < n; i++)
		max = (max > ptr[i]) ? max : ptr[i];

	return max;
}
