#include "main.h"

/**
 * puts_half - Print half the elemenys of a string literal
 * @str: String to be evaluated
 */

void puts_half(char *str)
{
	int i; /* index of string literal */
	int count; /* length of string */
	int half;

	while (str[i] != '\0')
	{
		i++;
		count++;
	}
	if (i % 2 == 0)
	{
		half = i / 2;
		while (half <= count)
		{
			_putchar(str[half]);
			half++;
		}
	}
	else
	{
		half = (i - 1) / 2;
		while (half <= count)
		{
			_putchar(str[half]);
			half++;
		}
	}
	_putchar('\n');
}
