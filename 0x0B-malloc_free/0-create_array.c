#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it
 * with a specific char
 *
 * @size: the size of the array
 * @c: character to initialize the array with
 *
 * Return: pointer to the first character of the array
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(*s) * size);
	if (s == NULL || size == 0)
		return (NULL);
	for (i = 0; i <= size; i++)
		s[i] = c;
	return (s);
}
