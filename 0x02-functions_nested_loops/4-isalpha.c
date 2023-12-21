#include "main.h"

/**
 * _isalpha - Check for alphabet characters
 * @c: value to be tested
 *
 * Return: O or 1 (Success)
 */

int _isalpha(int c)
{
	if ((c > 65  && c < 91) || (c > 97 && c < 123))
		return (1);
	else
		return (0);
}
