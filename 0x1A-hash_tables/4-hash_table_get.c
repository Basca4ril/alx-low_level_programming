#include "hash_tables.h"

/**
 * hash_table_get - retrieves value
 * @ht: hash table
 * @key: key
 * Return: Value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *curr;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	curr = ht->array[idx];

	while (curr != NULL)
	{
		if (strcmp(curr->key, key) == 0)
			return (curr->value);

		curr = curr->next;
	}

	return (NULL);
}
