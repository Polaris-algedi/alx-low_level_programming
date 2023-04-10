#include <stdio.h>

/**
 * power_of_2 - calculates the value of 2 raised to the power of a given
 * integer exponent
 * @exponent: integer
 *
 * Return: 2 reised to the power of a given integer exponent
 */
unsigned int power_of_2(int exponent)
{
	unsigned int result = 1;
	int i;

	for (i = 0; i < exponent; i++)
		result *= 2;

	return (result);
}
/**
 * one_zero - convert a single binary character to unsigned integer
 * @number: character to convert
 *
 * Return: 1 if number is equal to '1', otherwise it returns 0
 */
unsigned int one_zero(char number)
{
	return (number == '1' ? 1 : 0);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the binary number as a string
 *
 * Return: the converted number, or 0 if:
 * there is one or more chars in the string b that is not 0 or 1.
 * b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	int i, len = 0, sum = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		len++;
	}

	for (i = len - 1; i >= 0; i--)
		sum += one_zero(b[i]) * power_of_2(len - i - 1);

	return (sum);
}
