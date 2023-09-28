#include "main.h"

/**
 * printer - helps print_binary
 * @num: numbers
 * @bit: bit
 */
void printer(unsigned long int num, int bit)
{
	if (bit > 0)
	{
		printer(num >> 1, bit - 1);
		_putchar((n & 1) ? '1' : '0');
	}
}

/**
 * print_binary - prints binary numbers
 * @n: number
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
	i	int b = sizeof(n) * 8;

		printer(n, b);
	}
}
