#include "main.h"

/**
 * check_prime_number - Recursive helper function to check if a number is prime.
 *
 * @n: integer to calculate.
 * @i: The current iteration value.
 *
 * Return: 1 if n is a prime number, otherwise 0.
 */

int check_prime_number(int n, int i)
{
        if (i == 1)
                return (1);
        if (n % i == 0)
                return (0);
        return (check_prime_number(n, i - 1));
}

/**
 * is_prime_number -  A function that returns 1 if the input integer is
 * a prime number, otherwise return 0.
 *
 * @n: integer to calculate.
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (check_prime_number(n, n - 1));
}
