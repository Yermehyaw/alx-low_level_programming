#include "main.h"

/**
 * print_numbers - Print no 0-9
 *
 * Return: O (Success)
 */

void print_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
