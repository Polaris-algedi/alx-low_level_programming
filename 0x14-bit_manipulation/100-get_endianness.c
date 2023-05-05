/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int n = 1, x;
	char *ptr;

	ptr = (char *)&n;
	x = ptr[0];
	return (x);
}
