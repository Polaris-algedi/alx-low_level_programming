#include <stdio.h>
#include "main.h"
/**
 * rev_string - reverses a string
 * @s: a pointer to a string
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	char r = s[0];
	int end = 0;
	int i;

	while (s[end] != '\0')
		end++;
	end--;
	for (i = 0; i < end; i++)
	{
		r = s[i];
		s[i] = s[end];
		s[end] = r;
		end--;
	}
}
