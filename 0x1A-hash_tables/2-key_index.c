#include "hash_tables.h"

/**
 * key_index - give index of key
 * @key: key
 * @size: size of array
 * Return: Index at which key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
