#include "main.h"

/**
 * set_bit - set bit
 * @n: pointer to positive integer
 * @index: index
 * Return: Integer
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int val;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	val = 1UL << index;
	*n |= val;

	return (1);
}
