#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds new node at end of list
 * @head: head of list
 * @str: string
 * Return: list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;

	if (str == NULL)
		return (NULL);
	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}
	node->len = strlen(node->str);
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
			current = current->next;
		current->next = node;
	}

	return (node);
}
