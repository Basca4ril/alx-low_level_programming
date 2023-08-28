#include <stdio.h>
#include "main.h"
#include <stddef.h>

/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: source
 * @num: number of bytes
 * Return: pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int num)
{
	unsigned int i;

	for (i = 0; i < num; ++i)
	{
		dest[i] = src[i];
	}

	return (dest);
}
