#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints diagonal
 *
 * @n: number of backslash
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');	
	}
	_putchar('\n');
}
