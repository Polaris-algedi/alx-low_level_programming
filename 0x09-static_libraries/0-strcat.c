#include <stdio.h>

/**
 * *_strcat - a function that concatenates two strings
 * @dest: pointer to a char array
 * @src: pointer to a string
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int count = 0;

	while (*dest)
	{
		dest++;
		count++;
	}
	while (*src)
	{
		*dest = *src;
		count++;
		src++;
		dest++;
	}
	*dest = '\0';

	return (dest - count);
}

