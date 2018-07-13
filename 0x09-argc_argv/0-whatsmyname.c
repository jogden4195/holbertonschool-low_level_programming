#include <stdio.h>

/**
 * main - prints name of program, followed by a new line.
 * @argc: number of arguments given to main
 * @argv: array of arguments given to main in the form of strings
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
		argc++;
	}
	return (0);
}
