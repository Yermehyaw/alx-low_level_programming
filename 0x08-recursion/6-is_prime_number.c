#include "main.h"

int _sqrt(int n, int guess);

/**
 * is_prime_number - Checks for prime numbers
 * @n: Number to be checked
 *
 * Return: 1 for prime numbers, otherwise returns 0 (Success)
 */

int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	/* Uses various techniques to filter out composite numbers */
	/*I know... I know... its not the best way of doing it... :)*/
	if ((n % 2) == 0) /* Composite numbers are mostly even */
		return (0);
	return (_sqrt(n, 1)); /* Prime numbers are not perfect square roots */
	/* Anything that reaches here must be a prime number*/
}

/**
 * _sqrt - Checks if a number is a perfect square root number,
 * using babylonian method to calculate perfect square root
 * @n: The number
 * @guess: A probable square root of @n
 *
 * Return: 0 if a perfect square root, 0 otherwise (Succes)
 */

int _sqrt(int n, int guess)
{
	int stat_guess;

	if ((guess * guess) == n)
		return (0);
	stat_guess = guess; /* Holds temp value of guess */
	guess = (guess + n / guess) / 2; /* Babylonian method */
	if (guess == stat_guess) /* If equal, its a prime number... right? :) */
		return (1);
	return (_sqrt(n, guess));
}
