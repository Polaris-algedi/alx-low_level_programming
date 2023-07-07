#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table you want to add or update the key/value to.
 * @key: The key and cannot be an empty string.
 * @value: The value associated with the key.
 *
 * value must be duplicated. value can be an empty string.
 * In case of collision, add the new_node node at the beginning of the list.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *collision = NULL;
	hash_node_t *new;
	unsigned long int index;

	if (!ht || !key || !value || strcmp(key, "") == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	/* Create the node */
	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (0);
	}

	for (collision = ht->array[index]; collision; collision = collision->next)
	{
		if (strcmp(collision->key, key) == 0)
		{
			free(collision->value);
			collision->value = strdup(value);
			return (1);
		}
	}
	new->key = strdup(key); /* To free afterwards*/
	new->value = strdup(value); /* To free afterwards*/
	new->next = NULL;
	/* Case of a Collision or no Collision */
	if (ht->array[index] != NULL)
		new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
