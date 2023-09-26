#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index
 * @head: head of list
 * @index: index
 * Return: integer
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *prev;
	unsigned int cnt = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		listint_t *tmp = *head;
		*head = (*head)->next;
		free(tmp);

		return (1);
	}
	curr = *head;
	prev = NULL;

	while (cnt < index && curr != NULL)
	{
		prev = curr;
		curr = curr->next;
		cnt++;
	}

	if (curr == NULL)
		return (-1);

	prev->next = curr->next;
	free(curr);

	return (1);
}
