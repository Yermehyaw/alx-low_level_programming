#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: String to be appended to
 * @src: String to be appended
 * @n: Number of bytes to be appended
 *
 * Description: Similar to strncat(). Will concatenate
 * only n bytes of @src to @dest
 * with an ending null byte.
 * Return: dest (Success)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, len_dest;

	/* Counts length of dest */
	i = 0;
	while (dest[i] != '\0')
		++i;
	len_dest = i;
	/* Concatenate n bytes of src */
	i = 0;
	while (i < n && src[i] != '\0') /*<n and not <=n because i starts at 0*/
	{
		dest[len_dest + i] = src[i];
		++i;
	}
	dest[len_dest + i + 1] = '\0';
	return (dest);
}
