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
	long int first_term = 1, second_term = 2, next_term;
	long int sum = 2;

	while (second_term <= 4000000)
	{
		next_term = first_term + second_term;
		if (next_term % 2 == 0)
		{ /* Check if the next term is even*/
			sum += next_term;
		}
		first_term = second_term;
		second_term = next_term;
	}
	printf("%ld\n", sum);
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
