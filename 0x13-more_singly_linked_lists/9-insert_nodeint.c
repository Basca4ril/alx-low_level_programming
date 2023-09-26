#include "lists.h"

/**
 * insert_nodeint_at_index - adds node at an index
 * @head: head og list
 * @idx: index
 * @n: integer
 * Return: node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t node = malloc(sizeof(listint_t));
	listint_t *curr;
	unsigned int cnt = 0;

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;

		return (node);
	}

	curr = *head;

	while (cnt < idx - 1 && curr != NULL)
	{
		curr = curr->next;
		cnt++;
	}

	if (curr == NULL)
	{
		free(node);
		return (NULL);
	}

	node->next = curr->next;
	curr->next = node;

	return (node);
}
