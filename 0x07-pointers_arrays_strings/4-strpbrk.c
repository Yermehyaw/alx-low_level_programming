#include "main.h"

/**
 * _strpbrk - Finds the first char in a string with any of the values
 * of another string
 * @s: String
 * @accept: Char values to be searchef
 *
 * Return: Pointer to position in s where the  first char is (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, len, sim;

	/* Counting accept */
	while (s[i] != '\0')
		++i;
	len = i;
	/* Finding the first similar char*/
	i = j = 0;
	while (i < len)
	{
		while (j < len)
		{
			if (s[i] == accept[j])
				sim = i;
			++j;
		}
		++i;
	}
	/* Storing in s the chars from sim to null byte */
	if (sim >= 0)
	{
		i = 0;
		while (i < sim)
		{
			s[i] = s[sim];
			++i;
			++sim;
		}
	}
	else
		s = '\0';
	return (s);
}
