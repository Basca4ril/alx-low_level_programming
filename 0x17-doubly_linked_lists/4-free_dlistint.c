#include "lists.h"

/**
 * free_dlistint - frees doubly linked list
 * @head: list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;

	while (head != NULL)
	{
		curr = head;
		head = head->next;
		free(curr);
	}
}
