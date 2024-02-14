#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int check_fd(int, char *);
int check_sz(int, char *);

/**
 * main - Copies the content of a file to another file
 * @argc: Variable counter
 * @argv: Argument vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int fd1, fd2, check;
	size_t sz_rd, sz_wr;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = malloc(1024);
	if (buf == NULL)
		exit(-1);
	fd1 = open(argv[1], O_CREAT | O_EXCL | O_RDONLY, 664);
	check = check_fd(fd1, argv[1]);
	if (check == -1)
		exit(98);
	fd2 = open(argv[2], O_CREAT | O_TRUNC | O_RDONLY);
	check = check_fd(fd2, argv[2]);
	if (check == -1)
		exit(99);
	sz_rd = read(fd1, buf, 1024);
	check = check_sz(sz_rd, argv[1]);
	if (check == -1)
		exit(98);
	sz_wr = write(fd2, buf, 1024);
	check = check_sz(sz_wr, argv[2]);
	if (check == -1)
		exit(99);
	if (close(fd1) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	free(buf);
	return (0);
}


/**
 * check_fd - Checks if open() is successful
 * @fd: file decriptor no
 * @nm: Name of file
 *
 * Return: 1 if succesful
 */

int check_fd(int fd, char *nm)
{
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			nm);
		return (-1);
	}
	return (1);

}


/**
 * check_sz - Checks if write() and read() are successful
 * @sz: write() and read() return values
 * @nm: Name of file
 * Return: 1 if succesful
 */

int check_sz(int sz, char *nm)
{
	if (sz < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			nm);
		return (-1);
	}
	return (1);

}
