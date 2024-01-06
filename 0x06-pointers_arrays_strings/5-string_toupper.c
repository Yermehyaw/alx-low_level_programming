#include "main.h"

/**
 * string_toupper - Change lowercase chars to uppercase
 * @str: A string
 *
 * Return: Uppercase chars (Success)
 */

char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = (str[i] - 32);
		else
			str[i] = str[i];
		++i;
	}
	return (str);
}
