#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: pointer to the reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	char *dest, *src;
	unsigned int i;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (old_size == new_size)
		return (ptr);

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);

	dest = (char *) p;
	src = (char *) ptr;
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			dest[i] = src[i];
	}
	else
		for (i = 0; i < new_size; i++)
			dest[i] = src[i];
	free(ptr);
	return (p);
}
