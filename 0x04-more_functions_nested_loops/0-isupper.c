#include "main.h"

/**
 * _isupper  - Checks for uppercase characters
 * @c: Value to br checked
 *
 * Return: O (Success)
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
