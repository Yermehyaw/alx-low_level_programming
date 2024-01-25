#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

int incr_i(int a, int i, int n);

/**
 * print_numbers - Prints all its param values
 * @seperator: Seperating punctuation
 * @n: No of param
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start (ap, n);
	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(ap, int));
		if (incr_i(separator != NULL, i, n))
			printf("%s", separator);
		++i;
	}
	va_end (ap);
	printf("\n");
}

/**
 * incr_i - Return 0 when i is a digit away from beibg equal to n
 * @a: Int returned by a conditional statement
 * @i: counting value in loop
 * @n: value being counted towards
 *
 * Return: an int (Success)
 */

int incr_i(int a, int i, int n)
{
	if (a == 0 || n == 0)
		return (0);
	if (i + 1 ==  n)
		return (0);
	return (1);
}
