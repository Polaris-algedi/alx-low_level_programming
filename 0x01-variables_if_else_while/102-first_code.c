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
	int a;
	int b;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9 ; j++)
		{
			for (a = i; a <= 9; a++)
			{
				for (b = j + 1; b <= 9; b++)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + a);
					putchar('0' + b);
					if (!(i == 9 && j == 8 && a == 9 && b == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
