#include <stdio.h>
/**
* main - Entry point
*
* Description: program that prints all the numbers of base 16 in lowercase,
* followed by a new line
*
* Return: Always 0
*/

int main(void)
{
	char ch = '0';

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
