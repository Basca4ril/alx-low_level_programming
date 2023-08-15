#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Prints last digit of a number
 *
 * @n: Parameter for print_last_digit function
 * Return: Integer last number
 */

int print_last_digit(int n)
{
	if (num < 0)
	{
		num = -num;
	}

	if (num < 10)
	{
		return num;
	}
	return print_last_digit(num / 10);
}
