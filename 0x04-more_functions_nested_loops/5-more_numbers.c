#include "main.h"

/**
 * more_number - Print 0-14 10x
 */

void more_number(void)
{
	int i;
	int j; /* no of times to be printed i.e 10x */

	for (j = 0; j <= 10; ++j)
	{
		i = 48;

		while (i < 58)
			_putchar(i);
		/* To print 10-14 */
		i = 49; /* Tens value */
		int y = 48; /* Unit value in 10 - 14 */

		while ((i = 49) && (y <= 52))
		{
			_putchar(i);
			_putchar(y);
			++y; /* only y is incremented */
		}
		_putchar('\n');
		++j; /* move to next line */
	}
}
