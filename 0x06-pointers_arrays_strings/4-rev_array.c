#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reserces array
 * @a: array pointer
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
	int init = 0;
	int end = n - 1;

	while (init < end)
	{
		int temp = a[init];

		a[init] = a[end];
		a[end] = temp;

		init++;
		end--;
	}
}
