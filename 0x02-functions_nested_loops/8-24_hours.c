#include "main.h"
#include <stdio.h>

/**
 * print_time - Prints time
 */

void print_time(int hour, int min)
{
	_putchar('0' + hour / 10);
	_putchar('0' + hour % 10);
	_putchar(':');
	_putchar('0' + min / 10);
	_putchar('0' + min % 10);
	_putchar('\n');
}

/**
 * jack_bauer - prints ever minute from 00:00 to 23:59
 *
 */
void jack_bauer(void)
{
	int hour;
	int min;

	for (hour = 0; hour < 24; hour++)
	{
		for (min = 0; min < 60; min++)
		{
			print_time(hour, min);
		}
	}
}
