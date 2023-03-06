
/**
 * *_strstr - a function that locates a substring.
 *
 * @haystack: String to be scanned.
 * @needle: The substring.
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int count = 0, n = 1, i, j;

	while (*needle)
	{
		count++;
		needle++;
	}
	needle -= count;

	for (j = 0; haystack[j]; j++)
	{
		if (haystack[j] == *needle)
		{
			for (i = 1; i < count; i++)
			{
				if (haystack[j + i] != needle[i])
					break;
				n++;
			}
			if (n == count)
			{
				return (haystack + j);
			}
			n = 1;
		}
	}
	return (0);
}
