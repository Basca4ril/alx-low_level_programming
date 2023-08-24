#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @str1: First string
 * @str2: Second string
 * Return: - if str1 < str2, 0 if str1 = str2, + is str2 < str1
 */

int _strcmp(char *str1, char *str2)
{
	while (*str1 != '\0' && *str2 != '\0')
	{
		if ((*str1) != (*str2))
		{
			return (*str1 - *str2);
		}
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}
