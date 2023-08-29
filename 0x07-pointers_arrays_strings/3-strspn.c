#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

/**
 * _strspn - gets length
 * @s: string to search
 * @accept: pointer for characters
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
		len++;
		s++;
	}

	return (len);
}
