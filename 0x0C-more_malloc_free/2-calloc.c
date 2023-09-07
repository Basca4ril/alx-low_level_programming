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
	size_t tsize;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	tsize = (size_t)nmemb * size;

	ptr = malloc(tsize);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, tsize);

	return (ptr);
}
