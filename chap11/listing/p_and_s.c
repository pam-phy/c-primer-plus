#include <stdio.h>

int main(void)
{
	const char * mesg = "Dno't be a fool!";
	const char * copy;

	copy = mesg;
	printf("%s\n", copy);
	printf("mesg = %s; &mesg = %p; value = %p\n", mesg, &mesg, mesg);
	printf("copy = %s; &copy = %p; value = %p\n", copy, &copy, copy);

	return 0;
}
