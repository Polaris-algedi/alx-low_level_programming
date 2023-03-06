
/**
 *  *_strchr - a function that locates a character in a string
 *
 * @s: Pointer to the string
 * @c: Character that we are looking for
 *
 * Return: a pointer to the string
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
