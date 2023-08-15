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
/**
 * print_alphabet - Prints lower case alphabets
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	putchar('\n');
}
