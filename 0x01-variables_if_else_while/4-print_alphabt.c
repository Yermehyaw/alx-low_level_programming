#include <stdio.h>

/**
 * main - Prints all tge alphabet except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char A = 'a';
	int i;

	while (i < 26)
	{
		if (i != 4 && i != 16)
			putchar(A);
		A++;
		i++;
	}
	putchar('\n');
	return (0);
}
