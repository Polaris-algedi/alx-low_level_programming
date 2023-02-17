#include <stdio.h>
/**
* main - Entry point
*
* Description: program that prints all possible different combinations
* of three digits.
* 012, 120, 102, 021, 201, 210 are considered the same combination of the
* three digits 0, 1 and 2.
* Numbers must be separated by ,, followed by a space.
* The two digits must be different.
* Print only the smallest combination of three digits
* not allowed to use any variable of type char
* You can only use putchar five times maximum in your code
*
* Return: Always 0
*/

int main(void)
{
	int i;
	int a;
	int b;

	for (i = 0; i <= 7; i++)
	{
		for (a = i + 1; a <= 8; a++)
		{
			for (b = a + 1; b <= 9; b++)
			{
				putchar('0' + i);
				putchar('0' + a);
				putchar('0' + b);
				if (!(i == 7 && a == 8 && b == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
