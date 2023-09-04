#include <stdio.h>

/**
 * main - entry point
 * @argc: commndine argument counter
 * @argv: pointer to array of strings
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
		printf("%s\n", argv[0]);
}
