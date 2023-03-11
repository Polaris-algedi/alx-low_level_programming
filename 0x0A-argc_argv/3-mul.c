#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 *
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: Always 0 (Success).
 */

int main(int argc, __attribute__((unused)) char **argv)
{
	int i, multi = 1;

	if (argc >= 3)
	{
		for (i = 1; i < argc; i++)
			multi *= atoi(argv[i]);
		printf("%d\n", multi);
		return (0);
	}

	puts("Error");
	return (1);
}
