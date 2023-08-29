#include "main.h"
#include <stdio.h>

int main(void)
{
	char *s = "hello, world";
	char *f = "world";
	char *n;

	n = _strstr(s, f);
	printf("%s\n", n);
	return (0);
}
