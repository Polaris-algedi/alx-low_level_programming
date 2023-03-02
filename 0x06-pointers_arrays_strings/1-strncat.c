#include <stdio.h>

/**
 * *_strcat - a function that concatenates two strings
 * @dest: pointer to a char array
 * @src: pointer to a string
 * @n: number of bytes
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0, fc;

	while (*dest)
	{
		dest++;
		count++;
	}
	fc = count;
	count = 0;
	while (*src && count < n)
	{
		*dest = *src;
		count++;
		src++;
		dest++;
	}
	*dest = '\0';

	return (dest - count - fc);
}

