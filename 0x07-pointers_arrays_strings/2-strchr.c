#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * _strchr - locatees character in a string
 * @c: character to search for
 * @s: string to search in
 * Return: pointer to found character
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);

	return (NULL);
}
