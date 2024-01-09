#include "main.h"

/**
 * strstr - Find the occurence of a string in another
 * @haystack: String to be searched
 * @needle: String to be found
 *
 * Return: Pointer to the first char of the found string (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, len;

	/* Count needle */
	i = 0;
	while (needle[i] != '\0')
		++i;
	len = i;
	/* Check for consecutive appearance of all chars of needle in haystack*/
	i = j = 0;
	while (i < len)
	{
		while (haystack[j] != '\0') /* Dont compare null byte*/
		{
			/* Search through haystack one char at a time */
			/* Looking for all chars of needle */
			if (haystack[j + i] == needle[j]) /* Hmmm... */
			{
				return (haystack + i);
			}
			++j;
		}
		j = 0;
		++i;
	}
	return ('\0');
}
