#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_opcodes - prints opcodes
 * @st: start
 * @numb: number if bytes
 */
void print_opcodes(int numb)
{
	int i;
	unsigned char *ptr = (unsigned char *)print_opcodes;

	for (i = 0; i < numb; i++)
	{
		printf("%02x", ptr[i]);
		if (i < numb - 1)
			printf(" ");
	}
	printf("\n");
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

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	numb = atoi(argv[1]);

	if (numb < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes(numb);

	return (0);
}
