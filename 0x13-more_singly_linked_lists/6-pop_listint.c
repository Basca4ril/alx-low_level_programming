#include "lists.h"

/**
 * pop_listint - delets last node
 * @head: head of list
 * Return: Last node
 */
int pop_listint(listint_t **head)
{
	if (*head == NULL)
		return (0);

	int num = (*head)->n;
	listint_t tmp = *head;

	*head = (*head)->next;
	free(tmp);

	return (num);
}
