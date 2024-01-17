#include "main.h"

/**
 * main - Prints the amount of arguments assed to it
 * @argc: Arg count
 * @argv: Arg vector
 *
 * Return: O (Success)
 */

int main(int argc, char **argv)
{
	int i;
	(void)argv;

	i = 0;
	while (--argc)
		++i;
	_putchar('0' + i);
	_putchar('\n');
	return (0);
}
