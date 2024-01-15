#include "main.h"
#include <stdlib.h>

int len_str(char *);

/**
 * str_concat - Concatenates two strings passed as parameters
 * @s1: String 1
 * @s2: String 2
 *
 * Return: A pointer to the concatenated string (Success)
 */

char *str_concat(char *s1, char *s2)
{
	char *m;
	int i, j;

	m = malloc(len_str(s1) + len_str(s2));
	if (m == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		m[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		m[i] = s2[j];
		i++;
		j++;
	}
	m[i] = '\0';
	return (m);
}


/**
 * len_str - Return the length of a string
 * @str: String
 *
 * Return: Length of the string
 */

int len_str(char *str)
{
	int len;

	len = 0;
	if (str == NULL)
		return (len);
	while (str[len] != '\0')
		len++;
	len += 1;
	return (len);
}
