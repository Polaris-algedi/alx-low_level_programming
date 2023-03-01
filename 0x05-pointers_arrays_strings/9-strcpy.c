#include <stdio.h>

/**
 * *_strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: pointer to a char array
 * @src: pointer to a string
 * Return: *dest
 */
char *_strcpy(char *dest, char *src)
{
	int count;

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

