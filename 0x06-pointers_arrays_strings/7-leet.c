#include <stdio.h>

/**
 * *leet - a function that encodes a string into 1337
 *
 * @str: The initial string
 *
 * Return: pointer to a string
 */
char *leet(char *str)
{
	int i, end = 0;
	char x[] = "AEOTLaeotl", ecks[] = "4307143071";

	for (i = 0; i < 10; i++)
	{
		while (*str)
		{
			if (*str == x[i])
				*str = ecks[i];
			str++;
			end++;
		}
		str -= end;
		end = 0;
	}
	return (str);
}
