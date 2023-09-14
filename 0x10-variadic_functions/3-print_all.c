#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: format
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *separator = "";
	int i = 0;

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == 'c')
			char ch = va_arg(args, int);

			printf("%s%c", separator, ch);

		else if (format[i] == 'i')
			int n = va_arg(args, int);

			printf("%s%d", separator, n);
		else if (format[i] == 'f')
			double val = va_arg(args, double);

			printf("%s%f", separator, val);
		else if (format[i] == 's')
			char *st = va_arg(args, char *);

			if (st == NULL)
				printf("%s(nil)", separator);
			else
				printf("%s%s", separator, st);
		separator = ", ";
		i++;
	}
	va_end(args);
	printf("\n");
}
