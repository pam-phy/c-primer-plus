#include<stdio.h>
#define NAME "GIGATHINK, INC."
#define ADRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40

void starbar(void);	/* prototype the function */

int main(void)
{
	starbar();
	printf("%s\n", NAME);
	printf("%s\n", ADRESS);
	printf("%s\n", PLACE);
	starbar();	/* use the function	*/

	return 0;
}

void starbar(void)	/* define the function	*/
{
	int count;

	for (count = 1; count <= WIDTH; count++)
		putchar('*');
	putchar('\n');
}
