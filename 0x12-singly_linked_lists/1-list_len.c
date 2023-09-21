#include "lists.h"

/**
 * list_len - finds number of elements
 * @h: pointer to head
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
