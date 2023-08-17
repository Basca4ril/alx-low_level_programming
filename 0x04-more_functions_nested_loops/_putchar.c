#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - characte to print
 *
 * @c: character to print
 * Retrun: 1 success, -1 error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
