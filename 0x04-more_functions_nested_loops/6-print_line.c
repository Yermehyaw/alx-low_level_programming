#include "main.h"

/**
 * print_line - Print a line using '_'
 * @n: Length of line
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int m = n; /* To represent the unknown value of n */

		for (m = 1; m <= n; ++m) /* m is 1 to ensure proper cointing */
			_putchar('_');
		_putchar('\n');
	}
}
