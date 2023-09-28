#include "main.h"

/**
 * get_bit - gets bit
 * @n: number
 * @index: index
 * Return: Bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int val;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	val = 1UL << index;

	return ((n & val) ? 1 : 0);

}
