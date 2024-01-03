#include "main.h"

/**
 * print_rev - Reverse a string
 * @s: String to be reversed
 */

void print_rev(char *s)
{
	int i;
	int count;

	for (i = count = 0; s[i] != '\0'; ++i) /* Just to count the array */
		;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
