#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies n characters of a string
 * @dest: destinations
 * @src: source
 * @n: size of tring
 * Return: Copied string
 */

char *_strncpy(char *dest, cahr *src, int n)
{
	char *res = dest;

	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (res);
}
