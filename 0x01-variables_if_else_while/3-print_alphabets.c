#include <stdio.h>

/**
 * main - Prints the alphabets in lower and upper cases
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char A, B;
	int i = 0, j = 0;

	A = 'a';
	B = 'A';
	while (i < 26)
	{
		putchar(A);
		A++;
		i++;
	}
	while (j < 26)
	{
		putchar(B);
		B++;
		j++;
	}
	putchar('\n');
	return (0);
}
