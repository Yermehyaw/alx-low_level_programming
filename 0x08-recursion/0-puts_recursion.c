#include "main.h"

/**
 * _puts_recursion - Prints a string of characters
 * @s: String
 */

void new_line(void)
{
	_putchar('\n');
}

void _puts_recursion(char *s)
{
	if (s == '\0') /* Base case */
		return;
	_putchar(_puts_recursion(s + 1));
	newline;
}
