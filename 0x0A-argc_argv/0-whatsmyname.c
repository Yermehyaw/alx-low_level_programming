#include "main.h"

/**
 * main - Print program name
 * @argc: Arg count
 * @argv: argument vector
 *
 * Return: O (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc > 0)
	{
		while (argc == 1)
		{
			while (argv[0][i] != '\0')
			{
				_putchar(argv[0][i]);
				++i;
			}
			++argc;
			_putchar('\n');
		}
	}
	return (0);
}
