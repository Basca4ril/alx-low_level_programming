#include "lists.h"

/**
 * free_listint - frees list
 * @head: head of list
 */
void free_listint(listint_t *head)
{
	listint_t *curr;

	while (head != NULL)
	{
		curr = head;
		head = head->next;
		free(curr);
	}
}
