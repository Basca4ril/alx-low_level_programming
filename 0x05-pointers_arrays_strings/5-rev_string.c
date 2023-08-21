#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverses string
 * @s: string parameter
 */

void rev_string(char *s)
{
	int len = strlen(s);
	int st = 0;
	int end = len - 1;
	char temp;

	while (st < end)
	{
		temp = s[start];
		s[st] = s[end];
		s[end] = temp;

		st++;
		end--;
	}
}
