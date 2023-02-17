#include <stdio.h>
/**
* main - Entry point
*
* Description: program that prints the alphabet in lowercase,
* followed by a new line, it print all the letters except q and e
*
* Return: Always 0
*/

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
