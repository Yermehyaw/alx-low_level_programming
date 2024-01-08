#include "main.h"

/**
 * _memset - Fills memory of an array with n bytes of a char
 * @s: Array to be filled
 * @b: Character
 * @n: No of bytes to be filled
 *
 * Return: Edited array - s (Success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	/* s cannot be counted because of unfilled null bytes */
	i = 0;
	while (n != 0) /**
			* correct requested no of bytes will be assumed
			* n is unsigned, thus will always be greater than 0
			*/
	{
		s[i] = b;
		++i;
		--n;
	}
	return (s);
}
