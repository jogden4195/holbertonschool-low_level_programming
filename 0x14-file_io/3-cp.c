#include "holberton.h"

/**
 * main - copies the content of a file to another file.
 * @argc: count of arguments from the command line
 * @argv: arguments from the command line in string form
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int file_to, file_from, check, count = 0;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, EXIT97);
		exit(97);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, EXIT99, argv[2]);
		exit(99);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, EXIT98, argv[1]);
		exit(98);
	}
	check = read(file_from, buf, 1024);
	if (check == -1)
	{
		dprintf(STDERR_FILENO, EXIT98, argv[1]);
		exit(98);
	}
	while (buf[count])
		count++;
	if (count < 1024)
		check = write(file_to, buf, count);
	else
		check = write(file_to, buf, 1024);
	if (check == -1)
	{
		dprintf(STDERR_FILENO, EXIT99, argv[2]);
		exit(99);
	}
	check = close(file_to);
	if (check == -1)
	{
		dprintf(STDERR_FILENO, EXIT100, file_to);
		exit(100);
	}
	check = close(file_from);
	if (check == -1)
	{
		dprintf(STDERR_FILENO, EXIT100, file_from);
		exit(100);
	}
	return (0);
}
