#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates string
 * @str: Original string
 * Return: pointer to duplicate string
 */

char *_strdup(char *str)
{
	size_t len = strlen(str);
	char *dup = (char *)malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	if (dup == NULL)
		return (NULL);

	strcpy(dup, str);
	free(dup);

	return (dup);
}
