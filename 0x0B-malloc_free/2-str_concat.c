#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);
	char *concat = (char *)malloc(sizeof(char) * (len1 + len2 + 1));

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (concat == NULL)
		return (NULL);

	strcpy(concat, s1);
	strcat(concat, s2);

	return (concat);
	free(concat);
}
