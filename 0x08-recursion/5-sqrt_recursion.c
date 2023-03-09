#include "main.h"

/**
 * compute_sqrt_recursion - A function that returns the natural
 * square root of a number.
 *
 * @n: The number to calculate the square root of.
 * @i: The current iteration value.
 *
 * Return: The resulting square root, or -1 if n has no natural square root.
 */

int compute_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (compute_sqrt_recursion(n, i + 1));
}

/**
 * _sqrt_recursion - A function that returns the natural
 * square root of a number.
 *
 * @n: The number to calculate the square root of.
 *
 * Return: The resulting square root, or -1 if n is negative or has no
 * natural square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (compute_sqrt_recursion(n, 0));
}
