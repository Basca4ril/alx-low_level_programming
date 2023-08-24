#include "main.h"
#include <stdio.h>

/**
 * print_number - prints integer
 * @n: number
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	int div = 1;
	int temp = n;

	while (temp > 9)
	{
		div *= 10;
		temp /= 10;
	}
	while (div > 0)
	{
		int num = n / div;

		_putchar('0' + num);
		n %= div;
		div /= 10;
	}
}
