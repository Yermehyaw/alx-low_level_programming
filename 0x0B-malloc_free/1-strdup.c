#include "main.h"
#include <stdlib.h>

int len_str(char *str);

/**
 * _strdup - Create a copy of the string given as a parameter
 * @str: the string
 *
 * Return: Pointer to copy of the string (Success)
 */

char *_strdup(char *str)
{
	int i;
	char *m;

	if (str == NULL)
		return (NULL);
	m = malloc(len_str(str));
	if (m == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		m[i] = str[i];
		i++;
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
	int j, len;

	j = 0;
	while (str[j] != '\0')
		j++;
	len = j + 1;
	return (len);
}
