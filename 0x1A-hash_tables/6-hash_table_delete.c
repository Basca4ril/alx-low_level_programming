#include "hash_tables.h"

/**
 * hash_table_delete - deletes hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	if (ht == NULL)
		return;

	for (unsigned long int i = 0; i < ht->size; ++i)
	{
		hash_node_t *curr = ht->array[i];

		while (curr != NULL)
		{

			hash_node_t *nxt = curr->next;
			free(curr->key);
			free(curr->value);
			free(curr);
			curr = nxt;
		}
	}
	free(ht->array);
	free(ht);
}
