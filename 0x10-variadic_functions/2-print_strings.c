#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings
 * @separator: Separates strings
 * @n: The number of paramters passed to the function
 * @...: A variable number of paramters to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator != NULL)
			printf("%s", separator);

		str = va_arg(args, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
	}
	printf("\n");

	va_end(args);
}
