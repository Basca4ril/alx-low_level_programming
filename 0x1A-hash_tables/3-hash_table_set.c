#include "hash_tables.h"

/**
 * hash_table_set - adds to the hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *newnode;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	newnode = malloc(sizeof(hash_node_t));

	if (newnode == NULL)
		return (0);

	newnode->key = strdup(key);
	if (newnode->key == NULL)
	{
		free(newnode);
		return (0);
	}
	newnode->value = strdup(value);
	if (newnode->value == NULL)
	{
		free(newnode->key);
		free(newnode);
		return (0);
	}
	newnode->next = ht->array[idx];
	ht->array[idx] = newnode;

	return (1);
}
