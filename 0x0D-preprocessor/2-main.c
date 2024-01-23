#include <stdio.h>

int len(char *);

/**
 * main - Prints the name of the C file it was compiled from
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char *str;

	str = __FILE__;
	printf("%s\n", str);
	return (0);

}


/**
 * len - Counts the length of a string
 * @str: String
 *
 * Return: Length of string (Success)
 */

int len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		++i;
	i += 1;
	return (i);
}
