#include "main.h"

/**
 * _islower - Checks for lowercase character.
 * @c: The character to be tested
 *
 * Return: O or 1 (Success)
 */

int _islower(int c)
{
	if (c > 97 && c < 123)
		return (1);
	else
		return (0);
}
