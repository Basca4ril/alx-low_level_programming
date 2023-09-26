#include "lists.h"

/**
 * get_nodeint_at_index - gets nth node
 * @head: head of list
 * @index: index of node to get
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cnt = 0;

	while (head != NULL)
	{
		if (cnt == index)
			return (head);

		head = head->next;
		cnt++;
	}

	return (NULL);
}
