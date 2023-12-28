#include <stdio.h>

/**
 * main - Fizzbuzz coding interview question
 *
 * Return: O (Success)
 */

int main(void)
{
	int i = 1;

	while (i <= 99)
	{
		if ((i % 15) == 0)
			printf("FizzBuzz ");
		else if ((i % 3) == 0)
			printf("Fizz ");
		else if ((i % 5) == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
		++i;
	}
	printf("Buzz\n"); /**
			   * Checker requirement
			   * last entry must have no whitespace,
			   * but ends with newline
			   */
	return (0);
}
