#include<stdio.h>

void copy_arr(double target1[], double source[], int n);
void copy_ptr(double * target2, double * source, int n);
void copy_ptrs(double * target3, double * source, double * end);

int main(void)
{
	int i;
	double * index;
	double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	double target1[5];
	double target2[5];
	double target3[5];

	copy_arr(target1, source, 5);
	for (i = 0; i < 5; i++)
		printf("%.1f ", target1[i]);
	printf("\n");

	copy_ptr(target2, source, 5);
	for (i = 0; i < 5; i++)
		printf("%.1f ", *(target2 + i));
	printf("\n");

	copy_ptrs(target3, source, source + 5);
	for (i = 0, index = source; index < source + 5; i++, index++)
		printf("%.1f ", *(target3 + i));
	printf("\n");

	return 0;
}

void copy_arr(double target1[], double source[], int n)
{
	int i;

	for (i = 0; i < n; i++)
		target1[i] = source[i];
}

void copy_ptr(double * target2, double * source, int n)
{
	int i;

	for (i = 0; i < n; i++)
		target2[i] = *(source + i);
}

void copy_ptrs(double * target3, double * source, double * end)
{
	int i;
	double * index;

	for (i = 0, index = source; index < end; i++, index++)
		target3[i] = *index;
}
