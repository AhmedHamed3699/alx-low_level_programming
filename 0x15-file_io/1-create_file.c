#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: the filename
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file;

	if (!filename)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file < 0)
		return (-1);

	if (text_content && write(file, text_content, strlen(text_content)) == -1)
	{
		close(file);
		return (-1);
	}

	close(file);
	return (1);
}
