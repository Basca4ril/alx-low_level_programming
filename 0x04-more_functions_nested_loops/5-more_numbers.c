#include "main.h"
#include <stdio.h>

/**
 * print_number -  prints number
 *
 * @num: number to be printed
 */

void print_number(int num)
{
	int rev;
	int cnt;

	if (num == 0)
	{
		_putchar('0');
	}

	rev = 0;
	cnt = 0;

	while (num > 0)
	{
		rev = rev * 10 + num % 10;
		num /= 10;
		cnt++;
	}
	while (cnt > 0)
	{
		_putchar(rev % 10 + '0');
		rev /= 10;
		cnt--;
	}
}

/**
 * more_numbers - prints 10 times the numbers from 0-10
 */

void more_numbers(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 <= 10; num1++)
	{
		for (num2 = 0; num2 <= 14; num2++)
		{
			print_number(num2);
		}
		_putchar('\n');
	}	
}
