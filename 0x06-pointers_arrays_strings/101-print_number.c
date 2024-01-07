#include "main.h"
#include <stdio.h>

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
	if (n >= 0)
	{
		while (n > 0)
		{
			a[i] = n % 10;
			printf("a[%d] is: %d\n", i, a[i]);
			n = (n / 10);
			++i;
		}
	}
	else if (n < 0)
	{
		i = 0;
		n = n * (-1); /* Converts to positive integers */
		a[0] = '-';
		/*	++i; */ /* Starts from second element*/
		while (n > 0)
		{
			a[i] = n % 10;
			printf("a[%d] is: %d\n", i, a[i]);
			n = n / 10;
			++i;
		}
	}
	/* Printing */
	while (i > 0)
	{
		--i;
		_putchar('0' + a[i]);
	}
}
