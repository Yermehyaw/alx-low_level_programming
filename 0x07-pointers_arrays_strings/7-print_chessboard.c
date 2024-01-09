#include "main.h"

/**
 * print_chessboard - Prints a chessboard using a 2D array
 * @a: A 8×8 array
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	i = j = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			++j;
		}
		_putchar('\n');
		++i;
	}
}
