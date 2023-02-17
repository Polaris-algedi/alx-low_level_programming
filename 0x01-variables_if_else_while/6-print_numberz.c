#include <stdio.h>
/**
* main - Entry point
*
* Description: program that prints all single digit numbers of base 10
* starting from 0, followed by a new line,
* not allowed to use any variable of type char
*
* Return: Always 0
*/

int main(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');
	return (0);
}
