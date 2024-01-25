#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

int incr_i(int a, int i, int n);

/**
 * print_strings - Print varying no of strings
 * @separator: separating punctuation
 * @n: No of unknown param
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	i = 0;
	while (i < n)
	{
		if (va_arg(ap, char *) == NULL)
			printf("(nil)");
		else
		{
			printf("%s", va_arg(ap, char *));
			if (incr_i(separator != NULL, i, n))
				printf("%s", separator);
		}
		++i;
	}
	va_end(ap);
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
