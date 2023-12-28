#include "main.h"

/**
 * print_diagonal - Print a diagonal line
 * @n: Length of line
 *
 * Return: O (Success)
 */

void print_diagonal(int n)
{
	int m; /* horizontal spaces */
	int p; /* length of diagonal */

	if (n <= 0)
		_putchar('\n');
	else
	{

		for (m = 0; m < n; ++m) /* m < n, because m is init to  0 */
		{
			p = m;/* Spaces increases with diagonal length */
			while (p > 0)
			{
				_putchar(' ');
				--p;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
