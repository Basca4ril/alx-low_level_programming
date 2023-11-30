#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	if (ht == NULL)
		return;

	printf("{");
	for (unsigned int i = 0; i < ht->size; ++i)
	{
		hash_node_t *node = ht->array[i];

		while (node != NULL)
		{
			printf("'%s': '%s'", node->key, node->value);

			if (node->next != NULL || i < ht->size - 1)
				printf(", ");

			node = node->next
		}
	}
	printf("}\n");
}
