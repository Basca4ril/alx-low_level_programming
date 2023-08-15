#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
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
