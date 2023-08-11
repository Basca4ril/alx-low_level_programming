#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n, lnum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	lnum = n % 10; 
	if (lnum > 5)
		printf("%d and is greater than 5\n", lnum);
	else if (lnum == 0)
		printf("%d and is 0\n", lnum);
	else
		printf("%d and is less than 6 and not 0\n", lnum);
	return (0);
}
