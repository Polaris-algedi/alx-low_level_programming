#include <stdio.h>

/**
 * _strcmp - a function that compares two strings
 *
 * @s1: This is the first string to be compared
 * @s2: This is the second string to be compared
 *
 * Return: difference between the first nonidentical char
 */
int _strcmp(char *s1, char *s2)
{
	int diff;

	while (*s2)
	{
		if (*s2 != *s1)
		{
			break;
		}
		s2++;
		s1++;
	}
	diff = *s1 - *s2;

	return (diff);
}
