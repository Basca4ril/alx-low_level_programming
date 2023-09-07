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

	concat = malloc(sizeof(char) * 10);
	concat = _realloc(concat, sizeof(char) * 10, sizeof()char) * 98);
	printf("%s\n", concat);
	free(concat);
	return (0);
}
