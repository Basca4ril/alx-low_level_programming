#include "lists.h"
/**
 * get_dnodeint_At_index - gets node at index
 * @head: list
 * @index: index
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int cnt = 0;

	while (head != NULL)
	{
		if (cnt == index)
			return head;

		head = head->next;
		cnt++;
	}
	return (NULL);
}
