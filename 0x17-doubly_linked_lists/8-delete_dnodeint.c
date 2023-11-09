#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: list
 * @index: index
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr = *head;
	int cnt = 0;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(curr);
		return (1);
	}
	while (cnt < index && curr)
	{
		curr = curr->next;
		cnt++;
	}
	if (!curr)
		return (-1);
	if (curr->next)
		curr->next->prev = curr->prev;
	if (curr->prev)
		curr->prev->next = curr->next;
	free(curr);

	return (1);
}
