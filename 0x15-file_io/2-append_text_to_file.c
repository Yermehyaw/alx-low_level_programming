#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int len_str(char *);

/**
 * append_text_to_file - Append text to end of file
 * @filename: Name of fiel
 * @text_content: Chars to be appended
 *
 * Return: 1 on success, -1 otherwise (Success)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, sz_wr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd < 0)
		return (-1);
	if (text_content != NULL)
	{
		sz_wr = write(fd, text_content, len_str(text_content));
		if (sz_wr < 0)
		{
			close(fd);
			return (-1);
		}
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
