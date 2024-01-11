#include "main.h"

/**
 * _pow_recursion - Calcs. the power of a number
 * @x: The number
 * @y: The power
 *
 * Return: Exponent of the no (Success)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
