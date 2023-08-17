#include <stdio.h>
#include "main.h"

/**
 * main - prints largest of 3 integers
 * Return: 0
 */

int main(void)
{
	int a, b, c;
	int largest;

	a = 72;
	b = -898;
	c = 100;

	largest = largest_number(a, b, c);

	printf("%d is the largest number\n", largest);

	return (0);
}
