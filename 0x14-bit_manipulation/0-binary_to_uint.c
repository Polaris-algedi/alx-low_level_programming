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
	unsigned int power_2 = 1;
	unsigned int sum = 0, x;
	int i, j;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
	/* check if all the chars are eather 0 or 1 */
		if (b[i] != '1' && b[i] != '0')
			return (0);
		/* calculate the power of 2*/
		power_2 *= 2;
	}

	power_2 /= 2;
	for (j = 0; b[j] != '\0'; j++)
	{
		x = b[j] != '0' ? 1 : 0;
		sum += x * power_2;
		power_2 /= 2;
	}
	return (sum);
}
