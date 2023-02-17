#include <stdio.h>
/**
* main - Entry point
*
* Description: prints the alphabet in lowercase in reverse, followed by
* a new line
*
* Return: Always 0
*/
int main(void)
{

	char ch = 'z';

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);

	}
	putchar('\n');
	return (0);
}
