#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers from 0 to 9
 *
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
		_putchar(num);
	_putchar('\n');
}
