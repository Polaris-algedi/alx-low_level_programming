/**
 * flip_bits - counts the number of bits you would need to flip to
 * get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: returns the number of bits you would need to flip to
 * get from one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int n_first_bit, m_first_bit;
	unsigned int count = 0, i;
    
	for (i = 0; n > 0 || m > 0; ++i)
	{
		n_first_bit = n & 1;
		m_first_bit = m & 1;
		if (n_first_bit != m_first_bit)
			count++;
		n >>= 1;
		m >>= 1;
	}
	return (count);
}
