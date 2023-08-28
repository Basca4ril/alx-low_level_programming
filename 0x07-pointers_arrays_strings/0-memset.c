#include <stdio.h>
#include "main.h"
#include <stddef.h>

/**
 * _memset - fills memory with a constant byte.
 * @s: memory ara
 * @b: constant byte
 * @n: number of bytes
 * Return: pointer to memory area
 */

char  *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
	{
		s[i] = b;
	}
	return (s);
}
