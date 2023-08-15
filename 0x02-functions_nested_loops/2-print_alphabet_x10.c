#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - Prints lower case alphabets 10 times
 */

void print_alphabet_x10(void)
{
	char alpha;
	int num;

	for (num = 0; num <= 10; num++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
	}
	_putchar('\n');
}
