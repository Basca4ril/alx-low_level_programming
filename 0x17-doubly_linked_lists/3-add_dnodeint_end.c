#include "lists.h"

/**
 * add_dnodeint_end - adds elements at end of doubly linked list
 * @head: head of list
 * @n: number
 * Return: list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t node;
	dlistint_t tmp;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next
		}
		node->prev = tmp;
		tmp->next = node;
	}

	return (node);
}
