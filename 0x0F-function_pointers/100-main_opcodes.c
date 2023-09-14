#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_opcodes - prints opcodes
 * @st: start
 * @numb: number if bytes
 */
void print_opcodes(char *st, int numb)
{
	int i;

	for (i = 0; i < numb; i++)
	{
		printf("%02hhx", st[i]);
		if (i < numb - 1)
			printf(" ");
	}
	printf(" ");
}

/**
 * main - Entry point
 * @argc: number of parameters
 * @argv: pointer to parameter array
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int numb;
	char *addr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	numb = atoi(argv[i]);

	if (numb < 0)
	{
		printf("Error\n");
		return (2);
	}

	addr = (char *)main;

	print_opcodes(addr, numb);

	return (0);
}
