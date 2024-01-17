#include "main.h"
#include <stdlib.h>

/**
 * main - Print all arguments it receives
 * @argc: Arg count
 * @argv: Arg vector
 *
 * Return: O (Success)
 */

int main(int argc, char **argv)
{
	int i, j;

	while (argc--)
	{
		while (argv[i] != NULL)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				_putchar(argv[i][j]);
				++j;
			}
			++i;
			_putchar('\n');
		}
	}
	return (0);
}
