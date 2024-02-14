#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - Reads abd prints a file to stdout
 * @filename: Name of file
 * @letters: Size of char to be printed
 *
 * Return: No of expected char to be printed or 0 otherwise (Success)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t sz_rd, sz_wr;
	char *buf;

	if (filename == NULL)
		exit(0);
	buf = malloc(letters * sizeof(char));
	if (buf == NULL)
		exit(0);
	/* Open the file */
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		exit(0);
	/* Read the file to buf */
	sz_rd = read(fd, buf, count);
	if (sz_rd < 0)
		exit(0);
	/* Write to stdout */
	sz_wr = write(STDOUT_FILENO, buf, sz_rd);
	if (sz_wr < 0)
		exit(0);
	if (close(fd) < 0)
		exit(0);
	free(buf);
	return (sz_wr);
}
