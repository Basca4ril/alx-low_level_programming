#include "lists.h"

/**
 * add_nodeint_end - adds new node to end of list
 * @head: head of list
 * @n: integer
 * Return: list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		listint_t *curr = *head;

		while (curr->next != NULL)
			curr = curr->next;

		curr->next = node;
	}
	return (node);
}
