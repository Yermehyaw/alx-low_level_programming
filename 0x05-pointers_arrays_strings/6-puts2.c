#include "main.h"

/**
 * puts2 - Print only even index number elements of a string literal
 * @str: String to be evaluatef
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
