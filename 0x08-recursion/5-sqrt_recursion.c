#include "main.h"

int sqrt_helper(int n, int guess);

/**
 * _sqrt_recursion - Finds the square root of a number recursively
7 * @n: number
 *
 * Return: Square root or -1 (Success)
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (sqrt_helper(n, 1));
}

/**
 * sqrt_helper - Helps _sqrt_recursion,
 * Uses babaylonian method to calc square root
 * @n: The number
 * @guess: A probable number/ans
 *
 * Return: guess - square root ans (Success)
 */

int sqrt_helper(int n, int guess)
{
	int stat_guess;

	if ((guess * guess) == n)
		return (guess);
	stat_guess = guess; /* Holds the temp value of guess */
	guess = (guess + n / guess) / 2; /* Babylonian method */
	if (guess == stat_guess)
		return (-1);
	return (sqrt_helper(n, guess));
}
