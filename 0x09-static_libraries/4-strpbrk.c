
/**
 *  *_strpbrk - a function that searches a string for any of a set of bytes.
 *
 * @s: String to be scanned.
 * @accept: String containing the characters to match.
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 *
 */

char *_strpbrk(char *s, char *accept)
{
	char *start;

	start = accept;
	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
				return (s);
			accept++;
		}
		accept = start;
		s++;
	}
	return (0);
}
