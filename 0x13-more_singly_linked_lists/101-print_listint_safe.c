#include "lists.h"

/**
 * print_listint_safe - frees list safely
 * @head: head of list
 * Return: freed list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *ptr1 = head;
	const listint_t *ptr2 = head;
	size_t cnt = 0;

	while (ptr1 != NULL && ptr2 != NULL && ptr2->next != NULL)
	{
		printf("%d\n", ptr1->n);
		cnt++;

		ptr1 = ptr1->next;
		ptr2 = ptr2->next->next;

		if (ptr1 == ptr2)
			exit(98);

	}
	return (cnt);
}
