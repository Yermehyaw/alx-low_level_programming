#include "main.h"

/**
 * _puts - Print any string
 * @str: String to be printed
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		_putchar(str[i]);
		_putchar('\n');
	}
}
