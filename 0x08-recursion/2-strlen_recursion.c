#include "main.h"

/**
 * _strlen_recursion - Calculates the length of a string
 * @s: String
 *
 * Return: Length of the string (Success)
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
