#include <stdio.h>
#include <math.h>

/**
 * is_prime -checks for prime num
 * @num: number to check
 * Return: 1 if prime, 0 otherwise
 */
int is_prime(unsigned long num)
{
	unsigned long i;

	if (num <= 1)
		return (0);
	if (num <= 3)
		return (1);
	if (num % 2 == 0 || num % 3 == 0)
		return (0);

	for (i = 5; i * i <= num; i += 6)
	{
		if (num % i == 0 || num % (i + 2) == 0)
			return (0);
	}
	return (1);
}

/**
 * largest_prime_factor - find largest prim factor
 * @num: number
 * Return: largest prime factor
 */

unsigned long largest_prime_factor(unsigned long num)
{
	unsigned long largest = 0;
	unsigned long i;

	while (num % 2 == 0)
	{
		largest = 2;
		num /= 2;
	}
	for (i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			largest = i;
			num /= i;
		}
	}

	if (num > 2)
		largest = num;

	return (largest);
}
/**
 * main -Entry point
 * Return: Always 0
 */

int main(void)
{
	unsigned long num = 612852475143;
	unsigned long largest = largest_prime_factor(num);

	printf("%lu\n", largest);
	return (0);
}
