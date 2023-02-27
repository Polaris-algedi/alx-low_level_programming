#include <stdio.h>
/**
 * _strlen - returns the length of a string
 * @s: a pointer to a string
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s)
	{
		count++;
		s++;
	}
	return (count);
}
