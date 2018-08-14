#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: name that we want to give our new file
 * @text_content: text we want to put inside our new file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, written, count = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename,  O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	while (text_content[count])
		count++;
	written = write(fd, text_content, count);
	if (written == -1 || written != count)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
