#include <stdio.h>

/**
 * print_fibonacci_numbers()- prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 *
 * Return: Nothing
 *
 */
void print_fibonacci_numbers(void)
{
	int l;
	double a = 0, sum = 1;

	for (l = 0; l < 98; l++)
	{
		sum += a;
		a = sum - a;
		if (l == 97)
		{
			printf("%.0f", sum);
		}
		else
			printf("%.0f, ", sum);

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
