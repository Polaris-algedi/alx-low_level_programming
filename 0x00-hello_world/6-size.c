#include <stdio.h>

/**
* main - program that prints the size of various types on the computer
* Return: 0
*/
int main(void)
{
	char m;
	int o;
	long int h;
	long long int a;
	float m;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(m));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(o));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(h));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(m));
return (0);
}
