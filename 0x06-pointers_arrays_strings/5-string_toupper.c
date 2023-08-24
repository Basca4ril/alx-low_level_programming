#include "main.h"
#include <stdio.h>

/**
 * string_toupper - converst string to uppercase
 * @str: String to be converted
 * Return: Uppercase string
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
		}
		ptr++;
	}
	return (str);
}
