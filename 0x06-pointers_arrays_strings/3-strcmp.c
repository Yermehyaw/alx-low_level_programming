#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: String to be compared
 * @s2: String to be comapred with. I know... Its a tongue twister :)
 *
 * Return: Difference of @s1 and @s2 (Success)
 */

int _strcmp(char *s1, char *s2)
{
	int i, j, cmp;

	i = j = 0;
	/* Count s1 */
	while (s1[i] != '\0')
		++i;
	i += 1; /* Adding the missing null byte */
	/* Count s2 */
	while (s2[j] != '\0')
		++j;
	j += 1;
	/* Comparing them */
	cmp = i - j;
	return (cmp);
}
