#include "main.h"

int _atoi(char *arr);
void printnum(int c);

/**
 * main - Multiplies the first two arguments it receives
 * @argc: Arg count
 * @argv: Arg vector
 *
 * Return: O (Success)
 */

int main(int argc, char **argv)
{
	int res;

	res = 0;
	if (argc < 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (1);
	}
	else
	{
		res = _atoi(argv[1]) * _atoi(argv[2]);
		if (res == 0)
		{
			_putchar('G');
			return (1);
		}
		printnum(res);
		_putchar('\n');
	}
	return (0);
}


/**
 * _atoi - Converts array to integer
 * @arr: An array of chars / string
 *
 * Return: Integers in the array/string (Success)
 */

int _atoi(char *arr)
{
	int i, sign, ret;

	i = ret = sign = 0;
	while (arr[i] == ' ' && arr[i] != '\0')
		++i;
	if (arr[i] == '-')
	{
		sign = -1;
		++i;
	}
	/*sign = (arr[i++] == '-') ? -1 : 1; Value is checked before ++ */
	while (arr[i] != '\0')
	{
		if (arr[i] >= '0' && arr[i] <= '9')
			ret = (ret * 10) + (arr[i] - '0');
		++i;
	}
	return (ret * sign);
}

/**
 * printnum - Print multiple digits with _putchar()
 * @c: an int
 */

void printnum(int c)
{
	if (c < 0)
	{
		_putchar('-');
		c = -1 * c;
	}
	if (c / 10 != 0)
		printnum(c / 10);
	_putchar((c % 10) + '0');
}
