#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: The hash table to look into.
 * @key: The key to look for.
 *
 * Return: The value associated with the element, or NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *collision = NULL;
	unsigned long int index;
	char *current_key = NULL;

	if (!ht || !key || strcmp(key, "") == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	for (collision = ht->array[index]; collision; collision = collision->next)
	{
		current_key = collision->key;
		if (strcmp(current_key, key) == 0)
			return (collision->value);
	}
	return (NULL);
}
