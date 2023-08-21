#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copies string
 * @dest: destination of new copy
 * @src: source of string
 * Return: copy of string
 */

char *_strcpy(char *dest, char *src)
{
	char *orig = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (orig);
}
