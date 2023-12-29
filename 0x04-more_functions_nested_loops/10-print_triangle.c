#include "main.h"

/**
 * print_triangle - Print a triangle
 * @size: Length of triangle
 *
 * Description: Prints a triangle using n, whitespaces and # symbol
 * w will be the no of whitespaces
 * p is the no of "#" to be printed
 * w will be one less (size - 1) for first line
 * w will be two less (size - 2) for second line and so on
 * in the last line(nth line), w is zero
 * Reduce_w_whilst_increasing_p(#): As w is reducing as shown above,
 * p will be increasing by the same amount by which w has decreased
 * Return: O (Success)
 */

void print_triangle(int size)
{
	int w, p, i;

	i = 1; /* Decrementation var for w, first line is one less */
	w = size - i; /* First line of whitespaces, alx req */
	p = w - size; /**
		       * First line of "#"
		       * w - size not size - w, because p should be on the
		       * negative side of a mathematical number line
		       * so that as w reduces it can correspondingly increase
		       */
	while (size > 0)
	{
		/* Reduce_w_whilst_increasing_p(#) */
		while (w > 0)
		{
			_putchar(' ');
			--w;
		}
		while (p < 0)
		{
			_putchar('#');
			++p;
		}
		_putchar('\n');
		++i;
		w = size - i;
		p = w - size;
		--size;
	}
}
