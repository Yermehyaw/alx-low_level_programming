#include "main.h"

/**
 * _memcpy - Fills n bytes of an array with elemebts of another
 * @dest: Destination array
 * @src: Copied array
 * @n: No of bytes to be copied
 *
 * Return: src (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (n != 0)
	{
		dest[i] = src[i];
		++i;
		--n;
	}
	return (dest);
}
