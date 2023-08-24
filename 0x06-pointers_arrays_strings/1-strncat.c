#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two string
 * @dest: destination
 * @src: source
 * @n: size
 * Return: concatenated string
 */


char *_strncat(char *dest, char *src, int n)
{
	char *res = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (res);
}
