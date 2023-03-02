#include <stdio.h>

/**
 * *string_toupper - a function that changes all lowercase letters of a
 * string to uppercase
 *
 * @str: The lowercase string
 *
 * Return: pointer to the uppercase string
 */
char *string_toupper(char *str)
{
	int len = 0;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 'a' - 'A';
		str++;
		len++;
	}

	return (str - len);
}
