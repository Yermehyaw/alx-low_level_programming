#include "main.h"

/**
 * _abs - Compute the absolute value of a number
 * @c: number whose abs value is to be comp
 *
 * Return: O (Success)
 */

int _abs(int c)
{
	if ((c >= 0) || (c <= 0)) /* if guard, high security mode ;) */
	{
		if (c < 0)
			return (c * -1);
		else
			return (c);
	}
	else
		return ("Someone is trying to hack your program");
}
