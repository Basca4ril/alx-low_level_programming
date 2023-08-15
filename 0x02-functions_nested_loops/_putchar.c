#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - Writes a character to stdout
 * @c: Character to print
 *
 * Return: 1 on successand -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
