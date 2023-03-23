#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints all arguments separated by a comma
 * @format: A list of types of arguments passed to the function
 * @...: A variable number of paramters to print
 */
void print_all(const char * const format, ...)
{
	char *str, *sp;
	int i;
	va_list args;

	va_start(args, format);

	if (format)
	{
		i = 0;
		sp = "";
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sp, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", sp, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sp, str);
					break;
				default:
					i++;
					continue;
			}
			sp = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
