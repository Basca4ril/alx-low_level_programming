#include "lists.h"

/**
 * listint_len - finds length of list
 * @h: pointer to list
 * Return: length
 */
size_t listint_len(const listint_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		h = h->next;
		cnt++;
	}

	return (cnt);
}
