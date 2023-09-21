#include <string.h>
#include "lists.h"

/**
 * add_node - adds node
 * @head: head
 * @str: string
 * Return: list_t
 */
list_t *add_node(list_t **head, const char *str)
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
	node->next = *head;
	*head = node;

	return (node);
}
