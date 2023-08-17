#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for a digit
 *
 * @c: Parameter for _isdigit
 * Return: 1 if true, 0 if otherwie
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
