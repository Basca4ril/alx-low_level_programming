#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints and formats number
 *
 * @number: Parameter for print number function
 */

void print_number(int number)
{
	if (number < 10)
	{
		_putchar(' ');
		_putchar(number + '0');
	}
	else
	{
		_putchar(number / 10 + '0');
		_putchar(number % 10 + '0');
	}
}

/**
 * times_tables - Prints table
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int result = i * j;

			print_number(result);
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
				if (result < 10)
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
