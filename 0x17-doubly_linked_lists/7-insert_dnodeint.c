#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts node at index
 * @h: list
 * @idx: index
 * @n: number
 * Return: node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node;
	int num;

	if (h == NULL)
		return (NULL);

	node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;

	if (idx == 0)
	{
		node->prev = NULL;
		node->next = *h;

		if (*h != NULL)
			(*h)->prev = node;

		*h = node;

		return (node);
	}

	dlistint_t *curr = *h;
	num = 0;

	while (curr != NULL && num < idx - 1)
	{
		curr = curr->next;
		num++;
	}
	if (num != idx - 1)
	{
		free(node);
		return (NULL);
	}
	node->prev = curr;
	node->next = curr->next;
	if (curr->next != NULL)
		curr->next->prev = node;
	curr->next = node;

	return (node);
}
