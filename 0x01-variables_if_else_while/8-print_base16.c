#include <stdio.h>

/**
 * main - Prints all hex values  using putchar only
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0, j = 0;
	char B = '0';
	char A = 'a';

	while (i < 10)
	{
		putchar(B);/* putchar accepts primarily int values */
		B++;
		i++;
	}
	while (j < 6)
	{
		putchar(A);
		A++;
		j++;
	}
	putchar('\n');
	return (0);
}
