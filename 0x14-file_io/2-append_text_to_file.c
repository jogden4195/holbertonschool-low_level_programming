#include "holberton.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: the name of the file we are appending to
 * @text_content: text we are trying to append to file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, written, count = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	while (text_content[count])
		count++;
	written = write(fd, text_content, count);
	if (written == -1)
	{
		printf("hi!\n");
		return (-1);
	}
	close(fd);
	return (1);
}
