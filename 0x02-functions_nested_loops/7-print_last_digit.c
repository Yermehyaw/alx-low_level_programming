#include "main.h"

/**
 * print_last_digit - Prints last digit of a number
 * @c: number to be evaluated
 *
 * Return: O (Success)
 */

int print_last_digit(int c)
{
	int d;

	if ((c >= 0) || (c <= 0))
	{
		d = c % 10;
		_putchar(d);
		return (d);
	}
	else
		return (911);
}
