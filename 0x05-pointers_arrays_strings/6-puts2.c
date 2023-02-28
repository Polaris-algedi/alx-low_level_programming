#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with
 * the first character, followed by a new line
 * @str: string
 * Return: Nothing
 */

void puts2(char *str)
{
	int x = 0;

	while (*str)
	{
		if (x % 2 == 0)
		{
			_putchar(*str);
			str++;
		}
	else
		str++;
	x++;
	}
	_putchar('\n');
}

