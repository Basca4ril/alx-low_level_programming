#include <stdio.h>

/**
 * print_name - prints name
 * @name: string
 * @f: functions pointer
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
