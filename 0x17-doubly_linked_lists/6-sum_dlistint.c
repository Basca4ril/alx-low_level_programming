#include "lists.h"

/**
 * sum_dlistint - finds sum of doubly linked list
 * @head: list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int tot = 0;

	while (head != NULL)
	{
		tot += head->n;
		head = head->next;
	}

	return (tot);
}
