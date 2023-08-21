#include "main.h"
#include <stdio.h>

/**
 * _puts - prints text to stdout
 * @str: Parameter
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
