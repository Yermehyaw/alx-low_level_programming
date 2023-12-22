#include "main.h"

/**
 * _isdigit - Checks for digits
 * @c: value to be checked
 *
 * Return: O (Success)
 */

int _isdigit(int c);
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
