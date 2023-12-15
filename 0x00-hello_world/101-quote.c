#include <stdio.h>
#include <string.h>

/**
 * main - Prints a string to stderr
 *
 * Return: 1 (Success)
 */

int main(void)
{
	char *string = "and that piece of art is useful\""
" - Dora Korpar, 2015-10-19\n";

	fwrite(string, sizeof(char), strlen(string), stderr);
	return (1);
}
