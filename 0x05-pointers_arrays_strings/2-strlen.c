#include "main.h"

/**
 * _strlen - Print the length of a string
 * @s: string to be evaliated
 *
 * Return: Any positive number (Success)
 */

int _strlen(char *s)
{
	int i; /* Index no of the string */
	int count; /* Length of the string*/

	for (i = 0, count = 0; s[i] != '\0'; ++i)
		count++;
	return (count);
}
