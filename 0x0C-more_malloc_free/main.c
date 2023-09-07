#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - code check
 * Return: Always 0
 */

int main(void)
{
	char *concat;

	concat = array_range(0, 10);
	printf("%s\n", concat);
	free(concat);
	return (0);
}
