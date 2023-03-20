#include <stdio.h>

#define PRINT_FILENAME printf("%s\n", __FILE__)

/**
 * main - a program that prints the name of the file it was compiled from
 *
 * Return: 0
 */

int main(void)
{
	PRINT_FILENAME;
	return (0);
}
