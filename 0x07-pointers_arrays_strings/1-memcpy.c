
/**
 * *_memcpy - a function that copies memory area
 *
 * @dest: Destinatin address of memory to be filled
 * @src: pointer to the source that we are copying from
 * @n: Number of bytes to be copied
 *
 * Return: a pointer to the memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (dest);
}
