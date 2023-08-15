#include "main.h"
#include <stdio.h>

/**
 * _islower - checks for lowercase character
 *
 * @c: parameter for islower
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
