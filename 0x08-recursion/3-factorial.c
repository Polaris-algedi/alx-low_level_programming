#include "main.h"

/**
 * factorial - A function that returns the factorial of a given number.
 *
 * @n: Pointer to a integer.
 *
 * Return: The factorial of a given number.
 *
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
