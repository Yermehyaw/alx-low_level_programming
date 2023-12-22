#include "main.h"

/**
 * _islower  - Checks for lowercase characters
 * @c: Value to br checked
 *
 * Return: O (Success)
 */

int _islower(int c)
{
	if (c > 65 && c < 91)
		return (1);
	else
		return (0);
}
