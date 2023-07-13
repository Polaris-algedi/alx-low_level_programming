#include "hash_tables.h"


/**
 * shash_table_create - Creates a sorted hash table.
 * @size: size of the array.
 *
 * Return: pointer to the newly created sorted hash table,
 * otherwise NULL.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *shash_table;
	shash_node_t **shash_array;
	unsigned long int i;

	shash_table = malloc(sizeof(shash_table_t));
	if (!shash_table)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}

	shash_array = malloc(sizeof(shash_node_t *) * size);
	if (!shash_array)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}

	for (i = 0; i < size; i++)
		shash_array[i] = NULL;

	shash_table->size = size;
	shash_table->array = shash_array;
	shash_table->shead = NULL;
	shash_table->stail = NULL;

	return (shash_table);
}

/**
 * insert_sll - Adds an element to the sorted hash table.
 * @ht: The hash table you want to add or update the key/value to.
 * @node: The new node to be inserted.
 */
void insert_sll(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *current_snode = NULL;

	for (current_snode = ht->shead; current_snode;
			current_snode = current_snode->snext)
	{
		/* In the middle */
		if (strcmp(current_snode->key, node->key) > 0)
		{
			node->snext = current_snode;
			node->sprev = current_snode->sprev;
			if (current_snode->sprev)
				current_snode->sprev->snext = node;
			current_snode->sprev = node;
			/* Add node at the top */
			if (current_snode == ht->shead)
				ht->shead = node;
			return;
		}
	}
	/* Add the first node */
	if (!ht->shead)
	{
		ht->shead = node;
		ht->stail = node;
	}
	else
	{
		/* In the end */
		node->snext = NULL;
		node->sprev = ht->stail;
		ht->stail->snext = node;
		ht->stail = node;
	}
}


/**
 * shash_table_set - Adds an element to the sorted hash table.
 * @ht: The hash table you want to add or update the key/value to.
 * @key: The key and cannot be an empty string.
 * @value: The value associated with the key.
 *
 * value must be duplicated. value can be an empty string.
 * In case of collision, add the new_node node at the beginning of the list.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *collision = NULL;
	shash_node_t *new;
	unsigned long int index;

	if (!ht || !key || !value || strcmp(key, "") == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	/* Replace the old value with a new one */
	for (collision = ht->array[index]; collision; collision = collision->next)
	{
		if (strcmp(collision->key, key) == 0)
		{
			free(collision->value);
			collision->value = strdup(value);
			return (1);
		}
	}
	/* Create the node */
	new = malloc(sizeof(shash_node_t));
	if (!new)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (0);
	}
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;
	new->snext = NULL;
	new->sprev = NULL;
	/* Case of a Collision or no Collision */
	if (ht->array[index] != NULL)
		new->next = ht->array[index];
	ht->array[index] = new;

	insert_sll(ht, new);
	return (1);
}

/**
 * shash_table_get - Retrieves a value associated with a key.
 * @ht: The hash table to look into.
 * @key: The key to look for.
 *
 * Return: The value associated with the element, or NULL.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *collision = NULL;
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

/**
 * shash_table_print - Prints a sorted hash table.
 * @ht: The sorted hash table to be printed.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *snode = NULL;
	bool swiitch = false;

	if (!ht)
		return;

	printf("{");
	for (snode = ht->shead; snode; snode = snode->snext)
	{
		if (swiitch)
			printf(", ");
		printf("\'%s\': \'%s\'", snode->key, snode->value);
		swiitch = true;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse.
 * @ht: The sorted hash table to be printed.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *snode = NULL;
	bool swiitch = false;

	if (!ht)
		return;

	printf("{");
	for (snode = ht->stail; snode; snode = snode->sprev)
	{
		if (swiitch)
			printf(", ");
		printf("\'%s\': \'%s\'", snode->key, snode->value);
		swiitch = true;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a hash table.
 * @ht: The hash table to be deleted.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *collision = NULL, *tmp;
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		collision = ht->array[i];
		while (collision)
		{
			tmp = collision;
			collision = collision->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
