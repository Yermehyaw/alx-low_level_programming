#include "main.h"

/**
 * rev_string - Reverses a string with a pointer
 * @s: String to be reversed
 */

void rev_string(char *s)
{
	int i = 0;;
	int j = 0;
	char t[] = s; /* Store string temporarily */
 	int *p = &s;

	while (s[i] != '\0')
		i++;
	while (j <= i)
	{
		(*p - (i - j)) = t[i - j];
		j++;
	}
	return (s);
}
