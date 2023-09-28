#include "main.h"

/**
 * clear_bit = clear bit
 * @n: number
 * @index: index
 * Return: cleared bit
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int val;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	val = 1UL << index;
	val = ~val;
	*n &= val;

	return (1);
}
