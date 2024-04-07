#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - Creates a file
 * @filename: The name of the file to create
 * @text_content: A NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr_count, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;

		wr_count = write(fd, text_content, i);
		if (wr_count == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
