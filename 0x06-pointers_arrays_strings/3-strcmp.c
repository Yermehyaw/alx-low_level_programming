#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: String to be compared
 * @s2: String to be comapred with. I know... Its a tongue twister :)
 *
 * Return: Difference of the first different char in @s1 and @s2 (Success)
 */

int _strcmp(char *s1, char *s2)
{
	int i, j, cmp;

	i = j = 0;
	/* Seek a different char in both strings */
	while (s1[i] != '\0' && s2[j] != '\0' && s1[i] == s2[j])
	{
		++i;
		++j;
	}
	cmp = s1[i] - s2[j];
	return (cmp);
}
