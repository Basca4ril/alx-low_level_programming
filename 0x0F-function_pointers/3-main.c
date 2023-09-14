#include "3-calc.h"
#include "function_pointers.h"

/**
 * main - entry point
 * @argc: character counter
 * @argv: pointer to paramter array
 * Return: integer
 */

int main(int argc, char *argv[])
{
	int n1 = atoi(argv[1]), n2 = atoi(argv[3]), i = 0, res;
	char *op = argv[2];
	char rstr[12];
	int (*op_func)(int, int) = get_op_func(op);

	if (argc != 4)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}

	if (op_func == NULL)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(99);
	}

	res = op_func(n1, n2);
	
	if (res < 0)
	{
		_putchar('-');
		res = -res;
	}
	while (res > 0)
	{
		rstr[i++] = res % 10 + '0';
		res /= 10;
	}
	if (i == 0)
		rstr[i++] = '0';

	while (--i >= 0)
		_putchar(rstr[i]);

	_putchar('\n');

	return (0);

}
