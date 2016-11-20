#include<stdio.h>
#include<float.h>

int main(void)
{
	double n_d = 1.0 / 3.0;
	float n_f = 1.0 / 3.0;

	printf("double value: %.4f %.12f %.16f\n", n_d, n_d, n_d);
	printf("float value: %.4f %.12f %.16f\n", n_f, n_f, n_f);
	printf("DBL_DIG = %d\n", DBL_DIG);
	printf("FLT_DIG = %d\n", FLT_DIG);

	return 0;
}
