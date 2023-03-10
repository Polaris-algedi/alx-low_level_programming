#include <stdio.h>

/**
 * *_strncpy - a function that copies a string
 * @dest: pointer to a char array
 * @src: pointer to a string
 * @n: number of bytes
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count, len = 0;

	while (*src)
	{
		src++;
		len++;
	}
	src -= len;
	for (count = 0; count < n; count++)
	{
		if (count > len)
		{
			*dest = '\0';
		}
		else
		{
			*dest = *src;
			src++;
		}
		dest++;
	}

	return (dest - count);
}
