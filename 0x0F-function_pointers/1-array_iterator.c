#include <stdio.h>

/**
 * array_iterator - executes a function given as a parameter
 * @array: Array
 * @size: Array size
 * @action: action function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
