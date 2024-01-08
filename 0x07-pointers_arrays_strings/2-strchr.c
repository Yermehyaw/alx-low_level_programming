#include "main.h"
#include <stdio.h>
/**
 * _strchr - Locates a character in a string
 * @s: String
 * @c: Character
 *
 * Return: @s starting from the point the char is located (Success)
 */

char *_strchr(char *s, char c)
{
	int i, len;

	i = 0;
	/*Count the string */
	while (s[i] != '\0')
		++i;
	len = i;
	printf("Length of string is: %d\n", len);
	/* Check for the char */
	i  = 0;
	while (i > len)
	{
		if (s[i] == c)
		{
			printf("The char is found in index: %d\n", i);
			/* Writes the remaining chars to s */
			while (i < len)
			{
				s[i] = s[i];
				++i;
				printf("%s", s);
			}
			printf("\n");
			s[i] = '\0';
			printf("string in is is: %s\n", s);
		}
		else
		{
			s = '\0'; /**
				      * Dereferenced because s2 should return a
				      * null byte if char is not found
				      */
		}
		++i;
	}
	return (s);
}
