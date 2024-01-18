#include "main.h"
#include <stdlib.h>

int len(char *str);

/**
 * string_nconcat - Concatenates @n bytes of string
 * @s1: First string
 * @s2: Second string
 * @n: Integer
 *
 * Return: Pointer to allocated memory (Success)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *m;
	int i, j, ls1, ls2;

	ls1 = len(s1);
	ls2 = len(s2);
	m = malloc(len(s1) + n + 1);
	if (m == NULL)
		return (NULL);
	i = j = 0;
	while (i < ls1)
	{
		m[i] = s1[i];
		++i;
	}
	while (j < (int)n && j < ls2)
	{
		m[i] = s2[j];
		++i;
		++j;
	}
	m[i] = '\0';
	return (m);
}


/**
 * len - Retyrn length of a string
 * @str: String
 *
 * Return: int value (Success)
 */

int len(char *str)
{
	int i;

	i = 0;
	if (str == NULL)
		return (i);
	while (str[i] != '\0')
		++i;
	return (i);
}
