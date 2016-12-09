#include<stdio.h>
int imax(int * value, int n);

int main(void)
{
	int * value;


	return 0;
}

int imax(int * value, int n)
{
	int i;
	int max = 0;

	for (i = 0; i < n; i++)
		max = (max > *(value+ i)) ? max : *(value + i);

	return max;
}
