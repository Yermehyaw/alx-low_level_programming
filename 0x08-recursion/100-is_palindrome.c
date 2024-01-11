#include "main.h"

int paln_helper(char *s, int start, int end);
int len(char *s);

/**
 * is_palindrome - Checks for a palindromic string
 * @s: String
 *
 * Return: 1 if palindromic, 0 otherwise (Success)
 */

int is_palindrome(char *s)
{
	return (paln_helper(s, 0, len(s)));
}

/**
 * len - Returns the length of a string
 * @s: String
 *
 * Return: A integer (Success)
 */

int len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + len(s + 1));
}

/**
 * paln_helper - Helps is_palindrome()
 * @s: String
 * @start: Index no indicating start of the string
 * @end: End of string
 *
 * Return: 1 or 0 (Success)
 */

int paln_helper(char *s, int start, int end)
{
	if (*s >= len(s)) /* Base case */ /* Where the ish is... */
		return (1);
	if (s[start] != s[len(s)]) /**
				    * If at any instant is unequal,
				    * s in not palindromic
				    */
		return (0);
	return (paln_helper(s, start + 1, end = len(s) - 1)); /**
							 * Repeats until base
							 * case is true
							 */
}
