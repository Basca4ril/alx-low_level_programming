#include "main.h"
#include <stdio.h>

/**
 * print_line - prints line
 *
 * @n: number of underscores
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
	}
	_putchar('\n');
}
