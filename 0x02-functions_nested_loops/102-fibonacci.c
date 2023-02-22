#include <stdio.h>

/**
 * print_fibonacci_numbers()- prints the first 50 Fibonacci numbers,
 * starting with 1 and 2
 *
 * Return: Nothing
 *
 */
void print_fibonacci_numbers(void)
{
	int l;
	long int a = 0, sum = 1;

	for (l = 0; l < 50; l++)
	{
		sum += a;
		a = sum - a;
		if (l == 49)
		{
			printf("%ld", sum);
		}
		else
			printf("%ld, ", sum);

	}
	printf("\n");
}
/**
 * main- Entry point
 * Description: Call the function print_fibonacci_numbers()
 * Return: 0
 */
int main(void)
{
	print_fibonacci_numbers();
	return (0);
}
