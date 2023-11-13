#include <stdio.h>

/**
 * mod - modulus
 * @a: int 1
 * @b: int 2
 * Return: modulus
 */
int mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	else
		return (0);
}
