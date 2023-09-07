#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory fir an array
 * @nmemb: array memory
 * @size: size of memory
 * Return: pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
		return (NULL);

	size_t tsize = (size_t)nmemb * size;

	void *ptr = malloc(tsize);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, tsize);

	return (ptr);
}
