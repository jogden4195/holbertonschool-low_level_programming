#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output.
 * @filename: path to the file we are trying to read
 * @letters: number of letters the function will read/print
 *
 * Return: actual number of letters func can read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, written, stuff_read; 
	size_t count = 0;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	stuff_read = read(fd, buf, letters);
	if (stuff_read == -1)
		return (0);
	while (buf[count])
		count++;
	if (count < letters)
		written = write(STDOUT_FILENO, buf, count);
	else
		written = write(STDOUT_FILENO, buf, letters);
	if (written == -1)
		return (0);
	close(fd);
	return (written);
}
