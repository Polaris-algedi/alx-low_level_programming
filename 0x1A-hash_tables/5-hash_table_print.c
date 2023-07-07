#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to be printed.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *collision = NULL;
	unsigned long int i;
	bool swiitch = false;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		for (collision = ht->array[i]; collision; collision = collision->next)
		{
			if (swiitch)
				printf(", ");
			printf("\'%s\': \'%s\'", collision->key, collision->value);
			swiitch = true;
		}
	}
	printf("}\n");
}
