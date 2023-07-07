#include "hash_tables.h"

/**
 * key_index - Returns the index of a key.
 * @key: is the key.
 * @size: size of the array of the hash table.
 *
 * This function uses the hash_djb2 algorithem to generate the key index.
 *
 * Return: The index at which the key/value pair should be stored in the,
 * array of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
