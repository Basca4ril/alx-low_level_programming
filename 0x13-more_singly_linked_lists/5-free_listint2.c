#include "lists.h"

/**
 * free_listint2 - frees list
 * @head: head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *curr;

	while (*head != NULL)
	{
		curr = *head;
		*head = (*head)->next;
		free(curr);
	}
}
