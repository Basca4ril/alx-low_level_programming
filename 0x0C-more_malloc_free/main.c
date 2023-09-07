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

	concat =_calloc(98, sizeof(char));
	printf("%s\n", concat);
	free(concat);
	return (0);
}
