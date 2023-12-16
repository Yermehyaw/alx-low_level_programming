#include <stdio.h>

/**
 * main - Prints a-z using putchar only
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char A = 'a';
	int i = 0;

	while (i < 26)
	{
		putchar(A);
		A++;
		i++;
	}
	putchar('\n');
	return (0);
}
