#include <stdio.h>

/**
 * main - Prints a-z in reverse using putchar only
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char A = 'z';
	int i = 26;

	while (i > 0)
	{
		putchar(A);
		A--;
		i--;
	}
	putchar('\n');
	return (0);
}
