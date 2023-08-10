#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	printf("Size of a char: %lu", sizeof(char));
	printf(" byte(s)\nSize of an int: %lu", sizeof(int));
	printf(" byte(s)\nSize of a long int: %lu", sizeof(long int));
	printf(" byte(s)\nSize of a long long int: %lu", sizeof(long long int));
	printf(" byte(s)\nSize of a float: %lu", sizeof(float));
	printf(" byte(s)\n");

	return (0);
}
