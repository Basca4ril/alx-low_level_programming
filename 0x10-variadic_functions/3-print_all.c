#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: format
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *separator = "";
	const char *form;

	va_start(args, format);
	for (form = format; *form; form++)
	{
		if (*form == 'c')
			printf("%s%c", separator, va_arg(args, int));
		else if (*form == 'i')
			printf("%s%d", separator, va_arg(args, int));
		else if (*form == 'f')
			printf("%s%f", separator, va_arg(args, double));
		else if (*form == 's')
		{
			char *st = va_arg(args, char *);

			if (st == NULL)
				printf("%s(nil)", separator);
			else
				printf("%s%s", separator, st);
		}
		separator = ", ";
	}
	va_end(args);
	printf("\n");
}
