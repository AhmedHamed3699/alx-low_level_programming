#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - reads a text file
 * and prints it to the POSIX standard output
 * @filename: the filename
 * @letters: the number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 * if the file can not be opened or read return 0
 * if filename is NULL return 0
 * if write fails
 * or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t i = 0;
	char *buf;

	if (!filename)
		return (0);
	file = open(filename, O_RDONLY);
	if (file < 0)
		return (0);

	buf = malloc((sizeof(*buf) * letters) + 1);
	if (!buf)
		return (0);

	i = read(file, buf, letters);
	if (i < 0)
	{
		free(buf);
		close(file);
		return (0);
	}

	if (write(STDOUT_FILENO, buf, i) == -1)
		i = 0;

	free(buf);
	close(file);
	return (i);
}
