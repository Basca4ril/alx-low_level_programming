#include "3-calc.h"
#include "function_pointers.h"

/**
 * op_add - addition operation
 * @a: value 1
 * @b: value 2
 * Return: Sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction operation
 * @a: value 1
 * @b: value 2
 * Return: Difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication operation
 * @a: value 1
 * @b: value 2
 * Return: Multiple
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division operation
 * @a: value 1
 * @b: value 2
 * Return: Dividend
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
	}
	return (a / b);
}

/**
 * op_mod - Modular operation
 * @a: value 1
 * @b: value 2
 * Return: Remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
	}
	return (a % b);
}
