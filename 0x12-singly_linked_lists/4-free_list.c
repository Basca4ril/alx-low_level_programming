#include "lists.h"

/**
 * free_list - frees list_t
 * @head: head of list
 */
void free_list(list_t *head)
{
	list_t *cur = head;

	while (cur != NULL)
	{
		list_t *temp = cur;

		cur = cur->next;

		if (temp->str != NULL)
			free(temp->str);

		free(temp);
	}
}
