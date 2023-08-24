#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * rot13 - encodes string
 * @str: String
 * Return: Encoded string
 */

char *rot13(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if ((*ptr >= 'A' && *ptr <= 'Z'))
		{
			*ptr = ((*ptr - 'A' + 13) % 26) + 'A';
		}

		else if (*ptr  >= 'a' && *ptr <= 'z')
		{
			*ptr = ((*ptr - 'a' + 13) % 26) + 'a';
		}

		ptr++;
	}
	return (str);
}
