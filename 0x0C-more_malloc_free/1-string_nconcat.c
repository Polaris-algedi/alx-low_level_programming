#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 *
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

/**
 * _strncpy - a function that copies a string
 *
 * @dest: pointer to a char array
 * @src: pointer to a string
 * @n: number of bytes
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

/**
 * string_nconcat -  a function that concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: the first n bytes of s2
 *
 * Return: pointer to the allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int len1, len2, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len2 =_strlen(s2);
	if (len2 <= n)
		n = _strlen(s2);

	len1 = _strlen(s1);
	s = malloc(sizeof(char) * (len1 + n + 1));
	if (s == NULL)
		return (NULL);

	s = _strncpy(s, s1, len1);
	for (i = 0; i < n; i++)
		s[len1 + i] = s2[i];

	s[len1 + i] = '\0';
	return (s);
}
