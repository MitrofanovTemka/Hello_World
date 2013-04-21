#include <stdlib.h>
#include <stdio.h>

void print_help(char *program_name)
{
	printf("Usage: %s [ -h ]\n", program_name);
}

int main(int argc, char **argv)
{
	if ((argc > 1) && (! strcmp(argv[1], "-h"))) {
		print_help(argv[0]);
		exit(0);
	}

	puts("Hello World! \n");

	return 0;
}
