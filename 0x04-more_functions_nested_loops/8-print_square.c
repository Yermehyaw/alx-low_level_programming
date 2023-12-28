#include "main.h"

/**
 * print_square - Print a square using #
 * @size: Dimension of the square
 *
 * Return: O (Success)
 */

void print_square(int size)
{
	int l, b;

	if (size <= 0)
		_putchar('\n');
	else
	{
		l = size; /* length of square */
		b = size; /* breath of square */

		while (l > 0) /**
			       * l specifies the no of newline,
			       * i.e length of square
			       */
		{
			while (b > 0)
			{
				_putchar('#');
				--b;
			}
			b = size;
			_putchar('\n');
			--l;
		}
		_putchar('\n');
	}
}
