#include "main.h"

/**
 * factorial - Calculatre the factorial of an integer
 * @n: Integer
 *
 * Return: Result of calc (Success)
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
