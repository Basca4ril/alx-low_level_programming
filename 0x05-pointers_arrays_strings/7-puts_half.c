#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half a string
 * @str: String parameter
 */

void puts_half(char *str)
{
	int len =  strlen(str);
	int strt;
	int i;

	if (len % 2 == 0)
	{
		strt = len / 2;
	}
	else
	{
		strt = (len - 1) / 2;
	}
	for (i = strt; i < len; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
