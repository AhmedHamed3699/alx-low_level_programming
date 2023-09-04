#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

/**
 * main - Entry point
 * copies the content of a file to another file
 * @ac: arguments counter
 * @av: arguments vector
 *
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	int file_to, file_from, fd = -1, r = 1;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(av[1], O_RDONLY);
	file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while (r > 0)
	{
		r = read(file_from, buf, 1024);
		if (file_from < 0 || r < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		if (file_to < 0 || write(file_to, buf, r) < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (close(file_from) < 0)
		fd = file_from;
	if (fd == -1 && close(file_to) < 0)
		fd = file_to;
	if (fd != -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
		exit(100);
	}
	return (0);
}
