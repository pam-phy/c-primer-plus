#include <stdio.h>

int main(void)
{
	char note[] = "See you at the snack bar.";
	char * ptr;

	ptr = note;
	puts(ptr);
	puts(++ptr);
	note[7] = '\0';
	puts(ptr);
	puts(++ptr);

	return 0;
}
