#include "main.h"

/**
 * cap_string - Capitalize a string in camel case
 * @str: String to be capitalized in camel case
 *
 * Description: The beginning of a word is denoted by the following seperators:
 * space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }
 * Return: str (Success)
 */

char *cap_string(char *str)
{
	int i, j;

	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		if (str[0] >= 97 && str[0] <= 122)
			str[0] = (str[0] - 32);
		else if (str[i] == 10)
			str[i] = str[i];
		else if ((((str[i] == 9) ||
			   (str[i] >= ' ' && str[i] <= '.') ||
			   (str[i] >= 58 && str[i] <= 63)) /**
							    * if its any of the
							    * above listed
							    * seperators
							    */
			 &&
			  (str[j] >= 97 && str[j] <= 122))) /**
							     * and followed by
							     * a letter
							     */
		{
			str[i] = ' ';
			str[j] = (str[j] - 32);
		}
		else
		{
			str[i] = str[i];
			str[j] = str[j];
		}
		++i;
		++j;
	}
	return (str);
}
