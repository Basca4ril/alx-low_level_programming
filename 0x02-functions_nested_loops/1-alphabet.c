#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - Prints alphabets in lower case
 *
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
