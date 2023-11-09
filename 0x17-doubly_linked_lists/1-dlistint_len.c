#include "lists.h"

/**
 * dlistint_len - counts elements in doubly linked list
 * @h: list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		cnt++;
		h = h->next;
	}

	return (cnt);
}
