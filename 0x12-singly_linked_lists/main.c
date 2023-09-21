#include "lists.h"

int main(void)
{
	list_t *head;

	head = NULL;
	add_node(&head, "Asia");
	add_node(&head, "Daniel");
	print_list(head);
	return (0);
}
