#include "main.h"

/**
 * list_len - finds number of elements
 * @h: pointer to head
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	list_t *ptr = NULL;
	ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
