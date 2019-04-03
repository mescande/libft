
#include <libc.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	printf("%s ->\t%d\n", argv[1], atoi(argv[1]));
	return 0;
}
