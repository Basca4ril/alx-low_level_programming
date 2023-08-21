#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints string
 * @str: string parameter
 */

void puts2(char *str)
{
	int num = 0;

	while (str[num] != '\0')
	{
		putchar(str[num]);
		num += 2;
	}
	putchar('\n');
}
