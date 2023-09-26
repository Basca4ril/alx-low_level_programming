#include "lists.h"

/**
 * print_listint - prints elements of listint list
 * @h: point to listint
 * Return: number of node
 */
size_t print_listint(const listint_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		cnt++;
	}
	return (cnt);
}
