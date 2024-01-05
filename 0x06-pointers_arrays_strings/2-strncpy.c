#include "main.h"

/**
 * _strncopy - Copies n bytes of a string into another
 * @dest: Pasting destination
 * @src: Copied string
 * @n: Number of bytes of @src to be copied
 *
 * Description: Similar to strncopy(). Will copy n bytes of @src into @dest.
 * If @n is greater than @src,
 * null bytes are added to complete the remaining bytes
 * and if @src is greater than @n, no null byte is implictly added
 * Return: dest (Success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		++i;/* The end value of i is the index no of the null byte*/
	}
	if (n > i)
	{
		while (i < n)
		{
			dest[i] = '\0';
			++i;
		}
	}
	return (dest);
}
