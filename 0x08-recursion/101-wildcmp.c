#include "main.h"
#include <stdio.h>

/**
 * wildcmp_ - defines wildcmp
 * @s1: string 1
 * @s2: string 2
 * Return: number
 */
int wildcmp_(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == *s2 || *s2 == '*')
		return (wildcmp_(s1 + 1, s2 + 1));

	if (*s2 == '*')
		return (wildcmp_(s1, s2 + 1) || wildcmp_(s1 + 1, s2));

	return (0);
}

/**
 * wildcmp - compares two strings
 * @s1: string 1
 * @s2:  string 2
 * Return: 1 if true, 0 is not
 */
int wildcmp(char *s1, char *s2)
{
	return (wildcmp_(s1, s2));
}
