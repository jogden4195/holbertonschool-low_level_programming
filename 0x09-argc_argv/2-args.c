#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: number of arguments given to main
 * @argv: array of arguments given to main in the form of strings
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
	  printf("%s\n", *argv++);
	}
	return (0);
}
