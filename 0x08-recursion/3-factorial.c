#include "main.h"
#include <stdio.h>

/**
 * factorial - find factorial
 * @n: parameter for fatorial
 * Return: factorial
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else (n < 0)
	{
		return (-1);
	}

	return (n * factorial(n - 1));
}
