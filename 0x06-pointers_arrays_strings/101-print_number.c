#include "main.h"

/**
 * print_number - Prints negative and positive integers
 * @n: Integer to be printed
 *
 * Description: Prints negative and positive numbers without using a long int
 * and using only _putchar()
 */

void print_number(int n)
{
	int i;
	int a[10]; /* Assuming  a max size of integers */

	i = 0;
	if (n > 0)
	{
		while (n >= 0)
		{
			a[i] = n % 10;
			n / 10;
			++i;
		}
	}
	else if (n < 0)
	{
		i = 0;
		n = n * (-1); /* Converts to positive integers */
		while (n >= 0)
		{
			a[i] = n % 10;
			n / 10;
			++i;
		}
		n[0] = '-';
	}
	/* Printing */
	while (i >= 0)
	{
		_putchar(a[i - 1]);
		--i;
	}
}
