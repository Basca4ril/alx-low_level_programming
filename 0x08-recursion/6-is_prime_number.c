#include "main.h"
#include <stdio.h>

/**
 * is_prime - checks if num is prime
 * @n: number
 * @div: divisor
 * Return: number
 */
int is_prime(int n, int div)
{
	if (div <= 1)
		return (1);

	if (n % div == 0)
		return (0);

	return (is_prime(n, div - 1));
}

/**
 * is_prime_number - determines if number is prime number
 * @n: number
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return  (is_prime(n, n - 1));
}
