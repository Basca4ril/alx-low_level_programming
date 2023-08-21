#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: string
 * Return: integer
 */

int _atoi(char *s)
{
	int res = 0;
	int sign = 1;
	int i = 0;

	while (s[i] == ' ')
	{
		i++;
	}

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		if (res > (2147483647 - (s[i] - '0')) / 10)
		{
			if (sign == 1)
			{
				return (2147483647);
			}
			else
			{
				return (-2147483648);
			}
		}
		res = res * 10 + (s[i] - '0');
		i++;
	}
	return (res * sign);
}
