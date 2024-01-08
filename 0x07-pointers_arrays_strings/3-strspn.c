#include "main.h"

/**
 * _strspn - Print the no of similar chars in a string till the first
 * place they differ
 * @s: String where tge different char is searched
 * @accept: String used for comparison
 *
 * Return: No of similar chars(Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, len, diff;

	/* Count accept */
	i  = 0;
	while (accept[i] != '\0')
		++i;
	len = i;
	/* Finding the first char in s which is not in accept */
	i = 0;
	while (i < len)
	{
		if (accept[i] != s[i])
		{
			diff = i;
		}
		else
			++i;
	}
	/* Counting from index 0 of s to that diff byte */
	i  = 0;
	while (s[i] != s[diff])
	{
		++i;
	}
	return (i);
}
