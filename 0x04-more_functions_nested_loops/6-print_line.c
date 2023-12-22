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

		for (m = 0; m <= n; ++m)
			_putchar('_');
	}
	_putchar('\n');
}
