#include "main.h"

/**
 * flip_bits - counts flips
 * @n: number 1
 * @m: number 2
 * Return: number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int cnt = 0;

	while (xor)
	{
		cnt += xor & 1;
		xor >>= 1;
	}

	return (cnt);
}
