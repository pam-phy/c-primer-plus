#include <stdio.h>

void put1(const char * string)	/* string not altered */
{
	while (*string != '\0')
		putchar(*string++);
}
