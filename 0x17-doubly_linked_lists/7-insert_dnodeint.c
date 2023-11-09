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
	dlistint_t *node, tmp = *h;
	int num;

	if (!h || (idx > 0 && !tmp))
		return (NULL);

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->prev = NULL;
		node->next = *h;
		if (*h)
			(*h)->prev = node;
		return (*h = node);
	}

	for (num = 0; num < idx - 1; num++)
	{
		if (!tmp->next)
		{
			free(node);
			return (NULL);
		}
		tmp = tmp->next;
	}
	node->prev = curr;
	node->next = curr->next;
	if (curr->next != NULL)
		curr->next->prev = node;
	curr->next = node;

	return (node);
}
