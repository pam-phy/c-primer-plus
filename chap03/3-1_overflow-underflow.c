#include<stdio.h>
#include<limits.h>
#include<float.h>
1
int main(void)
{
	int n = INT_MAX;
	float f1 = FLT_MAX;
	float f2 = 2.e20;
	float f3 = f2 + 2.0f;

	printf("INT_MAX     = %+d\n", n);
	printf("INT_MAX + 1 = %+d\n", n + 1);
	printf("INT_MAX + 2 = %+d\n", n + 2);
	printf("FLT_MAX        = %+f\n", f1);
	printf("FLT_MAX + 10.0 = %+f\n", f1 + 10.0);
	printf("FLT_MAX + 20.0 = %+f\n", f1 + 20.0);
	printf("%f + 2.0 - %f = %f\n", f2, f2, f3 - f2);

	return 0;
}
