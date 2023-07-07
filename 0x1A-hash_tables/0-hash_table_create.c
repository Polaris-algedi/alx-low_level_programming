#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: size of the array.
 *
 * Return: pointer to the newly created hash table,
 * otherwise NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	hash_node_t **my_array;
	unsigned long int i;

	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}

	my_array = malloc(sizeof(hash_node_t *) * size);
	if (!my_array)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}

	for (i = 0; i < size; i++)
		my_array[i] = NULL;

	hash_table->size = size;
	hash_table->array = my_array;

	return (hash_table);
}
