#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array of characters
 * @size: size of array
 * @c: initial character
 * Return: Pointer to array of characters
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar = (char *)malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ar[i] = c;

	return (ar);
}
