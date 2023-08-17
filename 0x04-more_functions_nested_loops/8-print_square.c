#include "main.h"
#include <stdio.h>

/**
 * print_square - prints square
 *
 * @size: number of hashes
 */
void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		if (size <= 0)
		{
			_putchar('\n');
			break;
		}
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');	
	}
	/*_putchar('\n');*/
}
