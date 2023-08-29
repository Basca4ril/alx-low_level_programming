#include "main.h"
#include <string.h>
#include <stddef.h>
#include <stdio.h>

/**
 * _strstr - find substring
 * @haystack: string
 * @needle: substring
 * Return: substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *hay;
	char *ned;

	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		hay = haystack;
		ned = needle;

		while (*ned != '\0' && *hay == *ned)
		{
			hay++;
			ned++;
		}

		if (*ned == '\0')
			return (haystack);

		haystack++;
	}
	return (NULL);
}
