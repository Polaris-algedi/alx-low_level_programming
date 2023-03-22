/**
 * print_name - prints a name
 * @name: pointer to the name string
 * @f: pointer function to the function that prints the name
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
