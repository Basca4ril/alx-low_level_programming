#include "main.h"
#include <stdio.h>
/**
 * rsquare - helps main function
 * @n: number
 * @st: start
 * @end: end
 * Return: number
 */
int rsquare(int n, int st, int end)
{
	int mid, midS;

	if (start > end)
	{
		return (-1);
	}
	mid = start + (end - start) / 2;
	midS = mid * mid;
	if (midS == n)
		retrun mid;
	else if (midS < n)
		return (rsquare(n, mid + 1, end));
	else
		return (rsquare(n, st, mid - 1));
}
/**
 * _sqrt_recursion - find square root
 * @n: number
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	return (rsquare(n, 1, n));
}
