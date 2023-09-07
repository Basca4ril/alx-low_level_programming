#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates memory
 * @ptr: pointer to previously allocated memory
 * @old_size: size of allocated space for ptr
 * @new_size: new memory size
 * Return: new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	void *ptr2 = malloc(new_size);

	if (ptr2 == NULL)
		return (NULL);

	memcpy(ptr2, ptr, (old_size < new_size) ? old_size : new_size);

	free(ptr);

	return (ptr2);
}
