
/**
 *  *_strspn - a function that gets the length of a prefix substring.
 *
 * @s: String to be scanned.
 * @accept: String containing the characters to match.
 *
 * Return: This function returns the number of characters
 * in the initial segment of str1 which consist only of characters from str2.
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *start;

	start = accept;
	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
			{
				count++;
				break;
			}
			accept++;
			if (!*accept)
				return (count);
		}
		accept = start;
		s++;
	}
	return (count);
}
