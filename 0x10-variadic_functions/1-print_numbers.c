#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: seprarator
 * @n: integer
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int n = va_args(args, int);
		int temp = n;
		int div = 1;

		while (temp / 10 != 0)
		{
			div *= 10;
			temp /= 10;
		}

		while (div != 0)
		{
			_putchar('0' + (n / div));
			n %= div;
			div /= 10;
		}

		if (separator != NULL && i < n - 1)
		{
			const char *s;

			for (s = separator; *s; s++)
			{
				_putchar(*s);
			}
		}
	}
	va_end(args);

	_putchar('\n');
}
