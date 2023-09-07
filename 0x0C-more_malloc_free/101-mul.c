#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

/**
 * valdigit - checks if string is a digit
 * @str: string
 * Return: Boolean value
 */
bool valdigit(char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return (false);
		str++;
	}
	return (true);
}

/**
 * multiply - converts string into numbers and multiplies them
 * @num1: first string
 * @num2: second string
 * Return: Multiplication of two numbers
 */
long multiply(char *num1, char *num2)
{
	return (atoll(num1) * atoll(num2));
}

/**
 * main - Entry point
 * @argc: Number of parameters
 * @argv: pointer to string parameters
 * Return: Always 0(success)
 */
int main(int argc, char *argv[])
{
	long res;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!valdigit(argv[1]) || !valdigit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	res = multiply(argv[1], argv[2]);
	printf("%ld\n", res);

	return 0;
}
