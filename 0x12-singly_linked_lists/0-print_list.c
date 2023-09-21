#include "lists.h"

/**
 * print_list - prints elements of list_t list
 * @h: pointer to list_t
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	
	while (h != NULL)
	{
		count++;
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%u] %s",h->len, h->str);

		h = h->next;
	}
	return (count);

}
