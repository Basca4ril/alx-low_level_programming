#include "main.h"

/**
 * _strlen - counts letter in string
 * @s: String to be counted
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
