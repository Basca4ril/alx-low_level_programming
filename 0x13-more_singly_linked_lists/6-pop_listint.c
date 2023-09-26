#include "lists.h"

/**
 * pop_listint - delets last node
 * @head: head of list
 * Return: Last node
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	num = (*head)->n;
	tmp = *head;

	*head = (*head)->next;
	free(tmp);

	return (num);
}
