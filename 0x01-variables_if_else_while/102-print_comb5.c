#include <stdio.h>
/**
* main - Entry point
*
* Description: program that prints all possible combinations of
* two two-digit numbers.
* 00 01 and 01 00 are considered as the same combination of the numbers 0
* and 1.
* The combination of numbers must be separated by comma, followed by a space.
* The combinations of numbers should be printed in ascending order.
* All numbers should be printed with two digits. 1 should be printed as 01.
* not allowed to use any variable of type char.
* You can only use putchar eight times maximum in your code
*
* Return: Always 0
*/

int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i + 1; j <= 99 ; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (!(i == 98 && j == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
