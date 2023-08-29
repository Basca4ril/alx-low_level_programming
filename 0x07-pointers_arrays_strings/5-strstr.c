#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strstr - find substring
 * @haystack: string
 * @needle: substring
 * Return: substring
 */

char *_strstr(char *haystack, char *needle)
{
	if (needle == '\0')
		return (haystack);

	char *hay;
	char *ned;

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
