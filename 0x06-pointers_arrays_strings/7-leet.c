#include "main.h"

/**
 * leet - Encode a string using 1337
 * @s: String to be enoded
 *
 * Return: s (Success)
 */

char *leet(char *s)
{
	int i, j;
	int a[5] = {4, 3, 7, 0, 1};

	i = j = 0;
	while (s[i] != '\0')
	{
		while (j < 5)
		{
			if ((s[i] == 65 + (((i - 1) * 4) + 1 / 3)) ||
			    (s[i] == 97 + (((i - 1) * 4) + 1 / 3)))
			{
				s[i] = a[j];
			}
			else
				s[i] = s[i];
			++i;
			++j;
		}
	}
	s[i] = '\0'; /* Adding the missing null byte */
	return (s);
}
