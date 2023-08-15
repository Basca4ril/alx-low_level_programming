#include "main.h"
#include <stdio.h>

/**
 * _abs - computes the absolute value of integer
 *
 * @n: Parameter for _abs function
 * Return: Absolute value of given integer
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	return (n);
}
