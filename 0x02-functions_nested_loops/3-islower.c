#include "main.h"
#include <stdio.h>

/**
 * _islower - checks for lowercase character
 *
 * @c: parameter for islower
 * Return: 0 if true, 1 if false
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
