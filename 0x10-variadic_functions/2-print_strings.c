#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separator
 * @n: positive constant integer
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	const char *str, *c, *val, *st;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, const char *);

		if (str != NULL)
		{
			for (c = str; *c; c++)
			{
				_putchar(*c);
			}
		}
		else
		{
			val = "(nil)";
			while (*val)
			{
				_putchar(*val);
				val++;
			}
		}

		if (separator != NULL && i < (unsigned int)(n - 1))
		{
			for (st = separator; *st; st++)
			{
				_putchar(*st);
			}
		}
	}
	va_end(args);
	_putchar('\n');

}
