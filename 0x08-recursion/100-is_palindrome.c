#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_pal - checks if string is palindrome
 * @s: string pointer
 * @st: start
 * @end: end
 * Return: number
 */
int is_pal(char *s, int st, int end)
{
	if (st >= end)
		return (1);

	if (s[st] != s[end])
		return (0);

	return (is_pal(s, st + 1, end - 1));
}
/**
 * is_palindrome - checks if string is palindromee
 * @s: string
 * Return: 1 if true, 0 if not
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (is_pal(s, 0, len - 1));
}
