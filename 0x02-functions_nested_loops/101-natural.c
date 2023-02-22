#include <stdio.h>

/**
 * print_sum_multiples()- prints the sum of all the multiples
 * of 3 or 5 below 1024 (excluded)
 *
 * Return: Nothing
 *
 */
void print_sum_multiples(void)
{
	int l, sum = 0;

	for (l = 0; l < 1024; l++)
	{
		if (l % 3 == 0 || l % 5 == 0)
			sum += l;
	}
	printf("%d\n", sum);
}
/**
 * main- Entry point
 * Description: Call the function print_sum_multiples()
 * Return: 0
 */
int main(void)
{
	print_sum_multiples();
	return (0);
}
