#include "main.h"

/**
 * _strcat - Concarenates two string
 * @dest: String to be appended to, may be a char array or string literal
 * @src: String to be appended
 *
 * Description: Similar to stdlib strcat(). Will remove the null byte in @dest
 * but adds it at the  end of the concatenation
 * Return: dest (Success)
 */

char *_strcat(char *dest, char *src)
{
	int i, j, len_dest;

	/* Counts the length of dest */
	i = 0;
	while (dest[i] != '\0')
	{
		++i;
	}
	len_dest = i;
	/* Using dest as the string to which src is appended */
	j = 0;
	i = 0;
	while (src[j] != '\0')
	{
		dest[len_dest + i] = src[j];
		++i;
		++j;
	}
	dest[len_dest + i + 1] = '\0'; /* Adding the missing null byte */
	return (dest);
}
