#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet a through z ten times
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int n;
	char ch;

	for (n = 0; n < 10; n++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
