#include "main.h"

/**
 * more_numbers - Print 0-14 10x
 */

void more_numbers(void)
{
	int i;
	int j; /* no of times to be printed i.e 10x */
	int y; /* Unit value in 10 - 14 */

	for (j = 0; j < 10; ++j)/* Starting from 0, j < 10 to print 10x */
	{
		i = 48;

		while (i < 58)
		{
			_putchar(i);
			++i;
		}
		/* To print 10-14 */
		i = 49; /* Tens value */

		y = 48; /* Unit value in 10 - 14 */

		while ((i = 49) && (y <= 52))
		{
			_putchar(i);
			_putchar(y);
			++y; /* only y is incremented */
		}
		_putchar('\n'); /* move to next line */
	}
}
