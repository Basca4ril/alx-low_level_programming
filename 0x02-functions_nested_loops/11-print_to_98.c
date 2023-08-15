#include "main.h"
#include <stdio.h>

/**
 * print_number - prints number in correct format
 *
 * @num: number
 */
void print_number1(int num)
{
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num >= 10)
	{
		print_number1(num / 10);
	}
	_putchar('0' + (num % 10));
}

/**
 * print_to_98 - prints natural numbers from n to 98
 *
 * @n: starting number
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		print_number1(n);
		_putchar(',');
		_putchar(' ');
		if (n > 98)
		{
			n--;
		}
		else
		{
			n++;
		}
	}
	print_number1(98);
	_putchar('\n');
}
