#include <stdio.h>

/**
 * *cap_string - a function that capitalizes all words of a string
 *
 * @str: The initial string
 *
 * Return: pointer to a string
 */
char *cap_string(char *str)
{
	int i, x, n = 0;
	char sfw[13] = "\t\n ,;.!?\"(){}";

	while (*str)
	{
		n++;
		str++;
	}
	str -= n;

	if (str[0] >= 'a' && str[0] <= 'z')
		*str -= 'a' - 'A';

	for (i = 1; i < n; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			for (x = 0; x < 13; x++)
			{
				if (str[i - 1] == sfw[x])
					str[i] -= 'a' - 'A';
			}
		}
	}
	return (str);
}
