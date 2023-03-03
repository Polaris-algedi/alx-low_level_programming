#include <stdio.h>

/**
 * *rot13 - a function that encodes a string into rot13
 *
 * @str: The initial string
 *
 * Return: pointer to a string
 */
char *rot13(char *str)
{
	int i;
	char x[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ecks[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*str)
	{
		for (i = 0; i < 52; i++)
		{
			if (*str == x[i])
			{
				*str = ecks[i];
				break;
			}
		}
		str++;
	}
	return (str);
}
