#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints string in reverse
 * @s: string parametr
 */
void print_rev(char *s)
{
	int len;
	int i;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
