#include <stdio.h>      /* Standard Library of Input and Output */
#include <complex.h>    /* Standard Library of Complex Numbers */

int main(void)
{
    double complex z1 = 1.0 + 3.0 * I;
    double complex z2 = 1.0 - 4.0 * I;
	double r1 = 2.0;

    printf("Working with complex numbers:\n\v");

    printf("Starting values: Z1 = %.2f + %.2fi\tZ2 = %.2f %+.2fi\n", creal(z1), cimag(z1), creal(z2), cimag(z2));
	printf("r1 = %.2f\n", r1);

    double complex sum = z1 + z2;
    printf("The sum:        Z1 + Z2 = %.2f %+.2fi\n", creal(sum), cimag(sum));
	sum = r1 + z2;
	printf("The sum:        r1 + Z2 = %.2f %+.2fi\n", creal(sum), cimag(sum));

    double complex difference = z1 - z2;
    printf("The difference: Z1 - Z2 = %.2f %+.2fi\n", creal(difference), cimag(difference));
	difference = r1 - z2;
	printf("The difference: r1 - Z2 = %.2f %+.2fi\n", creal(difference), cimag(difference));

    double complex product = z1 * z2;
    printf("The product:    Z1 x Z2 = %.2f %+.2fi\n", creal(product), cimag(product));
	product = r1 * z2;
	printf("The product:    r1 x Z2 = %.2f %+.2fi\n", creal(product), cimag(product));

    double complex quotient = z1 / z2;
    printf("The quotient:   Z1 / Z2 = %.2f %+.2fi\n", creal(quotient), cimag(quotient));
	quotient = r1 / z2;
	printf("The quotient:   r1 / Z2 = %.2f %+.2fi\n", creal(quotient), cimag(quotient));

    double complex conjugate = conj(z1);
    printf("The conjugate of Z1 = %.2f %+.2fi\n", creal(conjugate), cimag(conjugate));

    return 0;
}
