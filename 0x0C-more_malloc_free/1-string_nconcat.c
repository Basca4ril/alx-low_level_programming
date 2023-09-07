#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: length of s2
 * Return: Pointer to concatinated string memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int tlen;
	unsigned int len1;
	unsigned int len2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	tlen = len1 + n;

	ptr = (char *)malloc(tlen + 1);

	if (ptr == NULL)
		return (NULL);

	strcpy(ptr, s1);
	strcat(ptr, s2, n);

	return (ptr);

}
