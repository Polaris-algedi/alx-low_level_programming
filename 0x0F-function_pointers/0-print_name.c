#include <stddef.h>
/**
 * print_name - prints a name
 * @name: pointer to the name string
 * @f: pointer function to the function that prints the name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
