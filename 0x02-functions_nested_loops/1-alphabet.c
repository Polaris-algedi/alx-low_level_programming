#include "main.h"

/**
 * print_alphabet - print the alphabet a through z
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
