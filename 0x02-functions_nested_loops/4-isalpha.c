#include "main.h"
#include <stdio.h>

/**
 * _isalpha - Checks if character is an alphabet
 *
 * @c: Parameter
 * Return: 1 if true, 0 if false
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
