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

	m = malloc(len_str(s1) + len_str(s2) - 1); /* -1? I dunno yet...*/
	if (m == NULL)
		return (NULL);
	i = 0;
	if (s1 == NULL)
		;
	else
	{
		while (s1[i] != '\0')
		{
			m[i] = s1[i];
			i++;
		}
	}
	j = 0;
	if (s2 == NULL)
		;
	else
	{
		while (s2[j] != '\0')
		{
			m[i] = s2[j];
			i++;
			j++;
		}
	}
	/*m[i] = '\0';*/
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
	int len, count;

	count = len = 0;
	if (str == NULL)
		return (len);
	while (str[count] != '\0')
		count++;
	len = count + 1;
	return (len);
}
