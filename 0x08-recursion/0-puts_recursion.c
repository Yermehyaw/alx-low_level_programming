#include "main.h"

/**
 * _puts_recursion - Prints a string of characters
 * @s: String
 */

void _puts_recursion(char *s)
{
	if (*s == '\0') /* Base case */
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
