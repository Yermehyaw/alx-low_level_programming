#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - Return sum of all its param
 * @n: No of param/argumets
 *
 * Return: Any value (Success), 0 if unsucessful
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
	i = sum = 0;
	while (i < n)
	{
		sum += va_arg(ap, int);
		++i;
	}
	va_end(ap);
	return (sum);
}
