#include "lists.h"

/**
 * sum_listint - adds list elements
 * @head: head of list
 * Return: summ
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
