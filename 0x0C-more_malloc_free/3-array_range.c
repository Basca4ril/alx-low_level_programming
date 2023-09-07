#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates array range
 * @min: minimum value
 * @max: maximum value
 * Return: Pointer to array
 */
int *array_range(int min, int max)
{
	int i, *ptr, diff;

	if (min > max)
		return (NULL);

	diff = max - min + 1;

	ptr = (int *)malloc(sizeof(int *) * diff);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < diff; i++)
	{
		ptr[i] = min + i;
	}

	return (ptr);
}
