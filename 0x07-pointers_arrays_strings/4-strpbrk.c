#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches a string for bytes
 * @s: string
 * @accept: byte
 * Return: pointer to byte
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (strchr(accept, *s) != NULL)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
