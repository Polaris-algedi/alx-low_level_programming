#include <stdio.h>
/**
* main - Entry point
*
* Description: program that prints all possible different combinations
* of two digits.
* Numbers must be separated by ,, followed by a space.
* The two digits must be different.
* 01 and 10 are considered the same combination of the two digits 0 and 1.
* not allowed to use any variable of type char
* You can only use putchar five times maximum in your code
*
* Return: Always 0
*/

int main(void)
{
	int i;
	int a;

	for (i = 0; i <= 8; i++)
	{
		for (a = i + 1; a <= 9; a++)
		{
			putchar('0' + i);
			putchar('0' + a);
			if (!(i == 8 && a == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
