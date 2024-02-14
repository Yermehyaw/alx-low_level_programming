#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <limits.h>

int len_str(char *);

/**
 * create_file - Creates a file
 * @filename: Name of file to be created
 * @text_content: Char to be added to file
 *
 * Return: Always 1 (Success)
 */

int create_file(const char *filename, char *text_content)
{
	int fd, sz_wr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 600);
	if (fd < 0)
		return (-1);
	if (text_content != NULL)
	{
		sz_wr = write(fd, text_content, len_str(text_content));
		if (sz_wr < 0)
			return (-1);
	}
	if (close(fd) < 0)
		return (-1);
	return (1);
}


/**
 * len_str - Retuens the length of a string
 * @str: String
 *
 * Return: Length - minus null byte (Success)
 */

int len_str(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		++len;
	return (len);
}
