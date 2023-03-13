#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - a program that adds positive numbers.
 *
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: Always 0 (Success).
 */

int main(int argc, char **argv)
{
	int i, j, len, sum = 0;
	char *s;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			s = argv[i];
			len = strlen(s);
			for (j = 0; j < len; j++)
			{
				if (!isdigit(s[j]))
				{
					puts("Error");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	else
		puts("0");
	return (0);
}
